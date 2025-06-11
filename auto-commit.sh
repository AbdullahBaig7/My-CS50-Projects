#!/bin/bash

cd /workspaces/My-CS50-Projects
git add .
msg="Auto-commit: $(date '+%B %d, %Y at %I:%M %p')"
git commit -m "$msg"
git push#!/bin/bash
msg="Auto-commit on $(date +'%Y-%m-%d %H:%M:%S')"
git add .
git commit -m "$msg"
git push
