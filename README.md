# Pick
A simple program that picks item(s) based on newline.

## Example
```sh
$ echo "a\nb\nc" | pick 2
# b
```

## Usage
To pick the most latest item in your download directory.
```sh
$ ls -ltr | pick 1
# sexy_pic.jpg
```

## Installation
In order to install this program you need to build it first using `make build`.
Then, you can install it in your local bin `~/.local/share/bin` using 
`make install`.

## LICENSE
### GNU General Public License v3.0
Permissions of this strong copyleft license are conditioned on making available 
complete source code of licensed works and modifications, which include larger 
works using a licensed work, under the same license. Copyright and license 
notices must be preserved. Contributors provide an express grant of patent 
rights.
