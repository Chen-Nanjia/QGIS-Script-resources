# QGIS Bug Fix

Fix QGIS Python console error: AttributeError NoneType object has no attribute write

## Usage

1. Copy startup.py to:
   C:\Users\Administrator\AppData\Roaming\QGIS\QGIS3\profiles\default\python\
2. Restart QGIS

## Files

- startup.py - Auto-fix sys.stderr and sys.stdout on startup