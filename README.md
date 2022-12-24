# C-Python

Using C functions in Python

## How to use?

Requirements:

 - Python version 3.10.* (used 3.10.8)
 - GCC
 - Python-dev (same as python version), also called python-devel. For installation [see this.](https://stackoverflow.com/a/21530768) 

First clone the repo and then run:

```
python setup.py build 
```

Copy the *.pyd file from the build folder.

In my case it's 'Example.cp310-mingw_x86_64.pyd' in 'build/lib.mingw_x86_64-3.10' folder.

![image](https://user-images.githubusercontent.com/95863983/209424680-88827146-15a6-41ea-9bf4-694ed25f0830.png)

And that's it.

Now, you can start using the 'Example' in python file.

Run the python file to see output

```
python main.py
```

Also, use `help` to see more about `Example`

```python
import Example

help(Example)
```
