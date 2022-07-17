#!/bin/bash
find . -type f -name "*.sh" | xargs basename -s .sh
