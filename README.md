# REPsh
Replace with console commands

RUN repsh FOR HELP

[DOWNLOADS](https://github.com/Sharkbyteprojects/REPsh/releases)


## DOCKERFILE

CREATE A DOCKERFILE WITH CONTENT LIKE

```

FROM rep_sh

COPY ./myfile ./

CMD ./repsh something toreplace myfile mynewfile

```