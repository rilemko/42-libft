<a id="readme-top" name="readme-top"></a>

<!-- ------------------------------
* TITLE, DESCRIPTION & CONTACT
------------------------------ -->
# 📖 libft

<table>
    <tr>
        <th align="left" width="3333px">Score</th>
        <th align="left" width="3333px">Duration</th>
        <th align="left" width="3333px">Peer(s)</th>
    </tr>
    <tr>
        <td>✅ <b>125</b> / 100</td>
        <td>🕓 1.5 week(s)</td>
        <td>👷🏻 No</td>
    </tr>
</table>

<br>

This project is a custom library that will be used in subsequent projects and enriched over time. As the **Standard Library is forbidden at 42**, it is necessary to create a number of very useful functions, but above all to recreate existing functions from the **Standard Library** in order to fully understand their **low-level operations** and learn the **fundamentals of the C programming language** and **UNIX systems**.

[**⛓️ FILE : SUBJECT**](en.subject.pdf)

<br>

<!-- ------------------------------
* TABLE OF CONTENTS
------------------------------ -->
## 📋 Table of contents

- [**👀 Overview**](#readme-overview)
- [**📦 Requirements**](#readme-requirements)
- [**💾 Installation**](#readme-installation)
- [**⚡️ Usage**](#readme-usage)
- [**🛠️ Makefile**](#readme-makefile)
- [**📄 License**](#readme-license)


<a id="readme-overview" name="readme-overview"></a>
<p align="right"><b><a href="#readme-top">TOP ⬆️</a></b></p>

<!-- ------------------------------
* OVERVIEW
------------------------------ -->
## 👀 Overview

<table>
    <tr>
        <th align="left" width="6666px" colspan="2">Mandatory</th>
        <th align="left" width="3333px">Bonus</th>
    </tr>
    <tr>
        <th align="left" width="3333px">Standard Library</th>
        <th align="left" width="3333px">Additional</th>
        <th align="left" width="3333px">Others</th>
    </tr>
    <tr>
        <td><a href="/sources/ft_isalpha.c">ft_isalpha</a></td>
        <td><a href="/sources/ft_substr.c">ft_substr</a></td>
        <td><a href="/sources/ft_lstnew.c">ft_lstnew</a></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_isdigit.c">ft_isdigit</a></td>
        <td><a href="/sources/ft_strjoin.c">ft_strjoin</a></td>
        <td><a href="/sources/ft_lstadd_front.c">ft_lstadd_front</a></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_isalnum.c">ft_isalnum</a></td>
        <td><a href="/sources/ft_strtrim.c">ft_strtrim</a></td>
        <td><a href="/sources/ft_lstsize.c">ft_lstsize</a></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_isascii.c">ft_isascii</a></td>
        <td><a href="/sources/ft_split.c">ft_split</a></td>
        <td><a href="/sources/ft_lstlast.c">ft_lstlast</a></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_isprint.c">ft_isprint</a></td>
        <td><a href="/sources/ft_itoa.c">ft_itoa</a></td>
        <td><a href="/sources/ft_lstadd_back.c">ft_lstadd_back</a></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_strlen.c">ft_strlen</a></td>
        <td><a href="/sources/ft_strmapi.c">ft_strmapi</a></td>
        <td><a href="/sources/ft_lstdelone.c">ft_lstdelone</a></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_memset.c">ft_memset</a></td>
        <td><a href="/sources/ft_striteri.c">ft_striteri</a></td>
        <td><a href="/sources/ft_lstclear.c">ft_lstclear</a></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_bzero.c">ft_bzero</a></td>
        <td><a href="/sources/ft_putchar_fd.c">ft_putchar_fd</a></td>
        <td><a href="/sources/ft_lstiter.c">ft_lstiter</a></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_memcpy.c">ft_memcpy</a></td>
        <td><a href="/sources/ft_putstr_fd.c">ft_putstr_fd</a></td>
        <td><a href="/sources/ft_lstmap.c">ft_lstmap</a></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_memmove.c">ft_memmove</a></td>
        <td><a href="/sources/ft_putendl_fd.c">ft_putendl_fd</a></td>
        <td></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_strlcpy.c">ft_strlcpy</a></td>
        <td><a href="/sources/ft_putnbr_fd.c">ft_putnbr_fd</a></td>
        <td></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_strlcat.c">ft_strlcat</a></td>
        <td></td>
        <td></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_toupper.c">ft_toupper</a></td>
        <td></td>
        <td></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_tolower.c">ft_tolower</a></td>
        <td></td>
        <td></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_strchr.c">ft_strchr</a></td>
        <td></td>
        <td></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_strrchr.c">ft_strrchr</a></td>
        <td></td>
        <td></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_strncmp.c">ft_strncmp</a></td>
        <td></td>
        <td></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_memchr.c">ft_memchr</a></td>
        <td></td>
        <td></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_memcmp.c">ft_memcmp</a></td>
        <td></td>
        <td></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_strnstr.c">ft_strnstr</a></td>
        <td></td>
        <td></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_atoi.c">ft_atoi</a></td>
        <td></td>
        <td></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_calloc.c">ft_calloc</a></td>
        <td></td>
        <td></td>
    </tr>
    <tr>
        <td><a href="/sources/ft_strdup.c">ft_strdup</a></td>
        <td></td>
        <td></td>
    </tr>
</table>

<a id="readme-requirements" name="readme-requirements"></a>
<p align="right"><b><a href="#readme-top">TOP ⬆️</a></b></p>

<!-- ------------------------------
* REQUIREMENTS
------------------------------ -->
## 📦 Requirements

```
sudo apt -y install clang-12 make
```

<a id="readme-installation" name="readme-installation"></a>
<p align="right"><b><a href="#readme-top">TOP ⬆️</a></b></p>

<!-- ------------------------------
* INSTALLATION
------------------------------ -->
## 💾 Installation

**1. Get the project**

```
git clone https://github.com/rilemko/42-libft.git
```

<br>

**2. Build the project**

```
make -j$(nproc)
```

> **🔵 Info:** The `libft.a` archive will be created in the project root directory.

<a id="readme-usage" name="readme-usage"></a>
<p align="right"><b><a href="#readme-top">TOP ⬆️</a></b></p>

<!-- ------------------------------
* Usage
------------------------------ -->
## ⚡️ Usage

**ft_atoi:**

```c
#include "includes/libft.h"
#include <stdio.h>

int main(void)
{
    int i;

    i = ft_atoi(" \t  -156abc")
    printf("%i\n", i);
}
```

```console
$ ./a.out
-156
```

<br>

**ft_bzero:**

```c
#include "includes/libft.h"
#include <stdio.h>
#include <strings.h>

int main(void)
{
    char    s[13] = "Hello world!";

    ft_bzero(s, 13);
    printf("%s\n", s);
}
```

```console
$ ./a.out
 
```

<br>

**ft_itoa:**

```c
#include "includes/libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char    *s;
    
    s = ft_itoa(-156);
    printf("%s\n", s);
    free(s);
}
```

```console
$ ./a.out
-156
```

<br>

**ft_split:**

```c
#include "includes/libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char    **s;

    s = ft_split(" Hello world! ", ' ')
    for (int i = 0; i < 2; i++)
    {
        printf("%s\n", s[i]);
        free(s[i]);
    }
    free(s);
}
```

```console
$ ./a.out
Hello
world!
```

<br>

**ft_strdup:**

```c
#include "includes/libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char    *s;

    s = ft_strdup("Hello world!")
    printf("%s\n", s);
    free(s);
}
```

```console
$ ./a.out
Hello world!
```

<br>

**ft_strjoin:**

```c
#include "includes/libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char    *s;

    s = ft_strjoin("Hello ", "world!");
    printf("%s\n", s);
    free(s);
}
```

```console
$ ./a.out
Hello world!
```

<br>

**ft_strlcat:**

```c
#include "includes/libft.h"
#include <stdio.h>

int main(void)
{
    char    s[13] = "Hello ";

    ft_strlcat(s, "world!", 13);
    printf("%s\n", s);
}
```

```console
$ ./a.out
Hello world!
```

<br>

**ft_strlcpy:**

```c
#include "includes/libft.h"
#include <stdio.h>

int main(void)
{
    char    s[13] = "Hello ";

    ft_strlcpy(s, "world!", 13);
    printf("%s\n", s);
}
```

```console
$ ./a.out
world!
```

<br>

**ft_strtrim:**

```c
#include "includes/libft.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char    *s;

    s = ft_strtrim(" . + -+Hello world! + -+ .+", ". +-");
    printf("%s\n", s);
    free(s);
}
```

```console
$ ./a.out
Hello world!
```

<br>

**ft_substr:**

```c
#include "includes/libft.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char    *s;

    s = ft_substr("hello world!", 6, 5);
    printf("%s\n", s);
    free(s);
}
```

```console
$ ./a.out
world
```

<a id="readme-makefile" name="readme-makefile"></a>
<p align="right"><b><a href="#readme-top">TOP ⬆️</a></b></p>

<!-- ------------------------------
* MAKEFILE
------------------------------ -->
## 🛠️ Makefile

<table>
    <tr>
        <th align="left" width="500px">Rule</th>
        <th align="left" width="9500px">Action</th>
        </tr>
    <tr><td><code>all</code></td><td>Compile.</td></tr>
    <tr><td><code>clean</code></td><td>Delete all generated object files</td></tr>
    <tr><td><code>fclean</code></td><td>Apply <code>clean</code>, <code>lclean</code> and delete the archive.</td></tr>
    <tr><td><code>lclean</code></td><td>Apply <code>fclean</code> to all used libraries.</td></tr>
    <tr><td><code>re</code></td><td>Apply <code>fclean</code> and force recompile.</td></tr>
</table>

[**⛓️ FILE : MAKEFILE**](Makefile)

<a id="readme-license" name="readme-license"></a>
<p align="right"><b><a href="#readme-top">TOP ⬆️</a></b></p>

<!-- ------------------------------
* LICENSE
------------------------------ -->
## 📄 License

This project is licensed under the terms of the **MIT** license.

[**⛓️ FILE : LICENSE**](LICENSE.md)

<p align="right"><b><a href="#readme-top">TOP ⬆️</a></b></p>
