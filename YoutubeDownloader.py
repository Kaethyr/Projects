from pytube import YouTube
import tkinter as tk
from tkinter import filedialog
from moviepy.editor import VideoFileClip
import os


url = str
save_path = str


def initial_prompt(url, save_path):
    
    while True:

        choice = int(input("1. Download Video\n2. Convert Video to mp4\n3. Exit\n"))
        
        if choice == 1:    
            download_video(url, save_path)
            break
        if choice == 2:
            convert_video_to_audio()
            
        if choice == 3:
            break
        
        else:
            print("Error Invalid Number\n")
            continue


def download_video(url, save_path):
    
    url = input("Enter Video URL: ")
    save_path = open_file_dialog()
    
    try:
        yt = YouTube(url)
        ys = yt.streams.get_highest_resolution()
        ys.download(save_path, filename="Video.mp4")
        print("Download Successful!")
        return ys.default_filename


    except Exception as e:
        print(e)
    

    save_dir = open_file_dialog()

    if save_dir:
        print("Started Download... ")
        download_video(url, save_dir)
    else:
        print("Invalid Location")


    return  url, save_path


def convert_video_to_audio():
    choice = input("Would you like to convert to mp3? (yes/no): ")
    
    output_audio_path = "D:\\Downloads"

    if choice == "yes":
        
        save_dir = open_file_dialog()

        if save_dir:
            print("Started Download... ")
            download_video(url, save_dir)
        else:
            print("Invalid Location")


        arr = [x for x in os.listdir(f"{save_dir}") if x.endswith(".mp4")]
        print(arr)

        input_video_name = input("Enter Name of File: ")
        input_video_path = os.path.join(f"{save_dir}", input_video_name)

        if not os.path.isfile(input_video_path):
            print(f"Error: File '{input_video_name}' not found.")
            return

        video_clip = VideoFileClip(input_video_path)   
        audio_clip = video_clip.audio

        output_audio_file = os.path.join(output_audio_path, "output.mp3")
        audio_clip.write_audiofile(output_audio_file, codec='mp3')


        print("Conversion Successful!")

    elif choice == "no":
        exit()

def open_file_dialog():
    folder = filedialog.askdirectory()
    if folder:
        print(f"Selected folder: {folder}")

    return folder


if __name__ == '__main__':
    root = tk.Tk()
    root.withdraw()

    
    
    initial_prompt(url, save_path)