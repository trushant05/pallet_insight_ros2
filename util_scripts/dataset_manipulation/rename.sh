#!/bin/bash

# Directory containing the images
directory="$PWD/dataset/Pallets"

echo $directory

# Initialize counter
counter=1

# Loop through each file in the directory
for file in "$directory"/*; do
    # Check if it is a file
    if [ -f "$file" ]; then
        # Format the new filename with zero padding
        new_name=$(printf "Train%04d.jpg" "$counter")
        
        # Move (rename) the file to the new name
        mv "$file" "$directory/$new_name"
        
        echo "Renamed $file to $new_name"
        
        # Increment counter
        counter=$((counter + 1))
    fi
done
