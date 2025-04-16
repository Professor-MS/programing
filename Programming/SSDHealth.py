import tkinter as tk
from tkinter import messagebox
import psutil
import subprocess
import platform

def get_battery_health():
    battery = psutil.sensors_battery()
    if battery:
        plugged = battery.power_plugged
        percent = battery.percent
        health_status = f"Battery is {'plugged in' if plugged else 'not plugged in'} and at {percent}% charge."
    else:
        health_status = "Battery information not available."
    return health_status

def get_ssd_health():
    system = platform.system()
    health_status = "SSD health check not supported on this system."
    
    if system == "Linux":
        try:
            output = subprocess.check_output("sudo smartctl -H /dev/sda", shell=True).decode()
            if "PASSED" in output:
                health_status = "SSD health is PASSED."
            else:
                health_status = "SSD health check FAILED."
        except Exception as e:
            health_status = f"Error checking SSD health: {e}"
    
    # Add more checks for other systems if needed.
    
    return health_status

def check_health():
    battery_health = get_battery_health()
    ssd_health = get_ssd_health()
    messagebox.showinfo("Health Status", f"Battery Health: {battery_health}\nSSD Health: {ssd_health}")

# Set up the GUI
root = tk.Tk()
root.title("PC Health Checker")
root.geometry("300x200")

# Add a button to check health
check_button = tk.Button(root, text="Check Health", command=check_health)
check_button.pack(pady=50)

# Run the application
root.mainloop()