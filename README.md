# Robber Language Translator

- A program that parses a text-based script file and translates it into structured HTML using the Robber Language, demonstrating file processing, custom language translation, and automated web-oriented output generation.

## Author Info

- Full Name: Ethan E. Lopez
- Chapman Email: etlopez@chapman.edu


## Source Files
- Main.cpp
- FileProcessor.cpp
- FileProcessor.h
- Translator.cpp
- Translator.h
- Model.cpp
- Model.h
- Input.txt

## Errors
- N/A

## Instructions For Running
- To compile: g++ *.cpp -o robber.exe
- To run: ./robber Input.txt

## Usage

This program translates plain text into Robber Language and formats the result into HTML.

### How The Program Works
---

1. Reads a structured or semi-structured text file
2. Processes each line and token (words, punctuation, etc.)
3. Translates text into Robber Language:
- Consonants are duplicated with an “o” inserted between them
4. Wraps the translated content in HTML tags
5. Outputs the final formatted result
   
### Robber Language Rules
---

Each consonant is transformed as:

C → C + 'o' + C

Example:

- b → bob
- t → tot

Vowels remain unchanged:

- a, e, i, o, u

Example Translation

Original | Robber Language
- hello	   | hohelollolo
- cat	     | cocatot
- robbers	 | rorobobboberorsos

Example Execution
- ./robber Input.txt

Example Output (conceptual HTML file):

- <html>
  - <body>
    - <p>Hohelollolo wowororloldod!</p>
  - </body>
- </html>

## Input Format

The program takes a plain text file as an input that contains the text to be translated.

#### Expected Structure

- The text in any number of lines
- No specific structure required unless more features are added

Example (Input.txt):

- Hello world!
- This is a test.
- Robber language is fun.

#### Rules

The text in the input may contain:
1. Letters (both lowercase and uppercase)
2. Spaces
3. Punctuation marks

The case sensitivity is to be maintained throughout.

## Implementation Details

### Core Components
---

**File Processor**
- Opens and reads the file line by line
- Sends content to Translator for translation
- Manages file validation and input data parsing

**Translator**:
- Iterates over all characters in the string
- Determines whether the character is a consonant or vowel
- Implements rules for the Robber Language
- Preserves:
   - Capitalization (if implemented)
   - Punctuation
   - Spacing

**Model**:
- Used to highlight singular, structural translations between consonants vs. vowels.

**HTML Generation**
- Wraps the translation in basic HTML tags
- Output is:
  - Printed to console
  - Written to an output file named output.html

### Algorithm Overview
---

1. Open the file
2. For each line in the file
   - For each character in the line
      - If character is a consonant
         - Append transformed character to output string
         - Transformed character = original consonant + 'o' + original consonant
      - Else
         - Append original character to output string
3. Wrap output string in HTML tags
4. Output the result
