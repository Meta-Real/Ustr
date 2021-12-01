CC = gcc

SDIR = srcs
ODIR = objs

SRCS = $(shell find $(SDIR) -name "*.c")
OBJS = $(patsubst $(SDIR)/%.c, $(ODIR)/%.o, $(SRCS))

LIB = libustr.a

make: $(LIB)

remake: clean $(LIB)

$(LIB): $(OBJS)
	ar -r $(LIB) $(OBJS)

$(ODIR)/%.o: $(SDIR)/%.c
	$(CC) -c -o $@ $<

clean:
	@rm -f $(shell find $(ODIR) -name "*.o")
	@rm -f $(LIB)

.PHONY: make remake clean
