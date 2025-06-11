#!/bin/bash
msg="Auto-commit on $(date +'%Y-%m-%d %H:%M:%S')"
git add .
git commit -m "$msg"
git push
