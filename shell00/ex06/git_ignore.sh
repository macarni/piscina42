#!/bin/bash
git status --ignored -s | grep '!!' | cut -d ' ' -f2
