FROM dockcross/linux-armv7a

COPY ./install-crosscompiler.sh /tmp/
RUN bash /tmp/install-crosscompiler.sh

COPY ./install-faust.sh /tmp/
RUN bash /tmp/install-faust.sh

COPY ./install-jack.sh /tmp/
RUN bash /tmp/install-jack.sh
