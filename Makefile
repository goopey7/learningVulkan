CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
learningVulkan : *.cpp *.hpp
	g++ $(CFLAGS) -o learningVulkan *.cpp $(LDFLAGS)
.PHONY: test clean

test: learningVulkan
	./learningVulkan

clean:
	rm -rf learningVulkan
