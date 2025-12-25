CC = gcc
CFLAGS = -Wall -g
TARGET = parser_app
OBJS = main.o parser.o

# 编译可执行文件
$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# 编译静态库
libparser.a: parser.o
    ar rs libparser.a parser.o

# 编译动态库
libparser.so: parser.c
    $(CC) $(CFLAGS) -fPIC -shared -o libparser.so parser.c

# 清理目标文件和库
clean:
    rm -f $(TARGET) $(OBJS) libparser.a libparser.so core
