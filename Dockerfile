FROM minsukjinoaa/centos7-gcc8:base

RUN useradd -ms /bin/bash tester
WORKDIR /home/tester
COPY . /home/tester

RUN chown -R tester:tester /home/tester
USER tester
RUN . /etc/bashrc && ./script

#ENV PATH=/opt/rh/devtoolset-8/root/usr/bin/:$PATH
#ENV PATH=/usr/local/cmake/bin:$PATH
#RUN echo $PATH

#RUN ./build/summation
#RUN diff summation.txt expected_result.txt

CMD [ "/bin/bash" ]
