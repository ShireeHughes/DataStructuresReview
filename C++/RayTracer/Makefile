#Override RM
RM = rm -rf

#Compiler
CC = clang++

#Compiler flags
CFLAGS = -std=c++11 -stdlib=libc++ -Weverything -Wno-c++98-compat

#Executable
RAYTRACER = raytracer

#TARGET
all: $(RAYTRACER)

$(RAYTRACER): main.cpp
	$(CC) $(CFLAGS) -o $(RAYTRACER) main.cpp

image: $(RAYTRACER)
	./$(RAYTRACER) > output.ppm

clean:
	$(RM) $(RAYTRACER)
	$(RM) $(RAYTRACER).dSYM
	$(RM) output.ppm