import requests
import time

def printIntro():
    ascii_art = """
 ██████╗ ███████╗████████╗     ██████╗ ███╗   ██╗███████╗
██╔════╝ ██╔════╝╚══██╔══╝    ██╔═══██╗████╗  ██║██╔════╝
██║  ███╗█████╗     ██║       ██║   ██║██╔██╗ ██║█████╗  
██║   ██║██╔══╝     ██║       ██║   ██║██║╚██╗██║██╔══╝  
╚██████╔╝███████╗   ██║       ╚██████╔╝██║ ╚████║███████╗
 ╚═════╝ ╚══════╝   ╚═╝        ╚═════╝ ╚═╝  ╚═══╝╚══════╝
"""
    print(ascii_art)

if __name__ == "__main__":
    printIntro()
    
    print("Enter target IP:")
    ip = input()
    url = f"{'http://' if 'http://' not in ip else ''}{ip}/index.php?id=1"
    print(f"Making GET request to {url}")
    time.sleep(1)
    response = requests.get(url)
    print(f"User:{response.text}")
