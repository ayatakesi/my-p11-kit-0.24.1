virtual-fixed-generated.h:
	$(AM_V_GEN)rm -f $@-t $@ && \
	{ echo '/* DO NOT EDIT! GENERATED AUTOMATICALLY! */'; \
	  echo; \
	  counter=0; \
	  while test $$counter -lt $(closures); do \
	    echo "P11_VIRTUAL_FIXED_FUNCTIONS($$counter)"; \
	    counter=`expr $$counter + 1`; \
	  done; \
	  echo; \
	  echo "CK_FUNCTION_LIST p11_virtual_fixed[P11_VIRTUAL_MAX_FIXED] = {"; \
	  counter=0; \
	  while test $$counter -lt $(closures); do \
	    echo "	P11_VIRTUAL_FIXED_INITIALIZER($$counter),"; \
	    counter=`expr $$counter + 1`; \
	  done; \
	  echo '};'; \
	  echo; \
	  counter=0; \
	  while test $$counter -lt $(closures); do \
	    echo "P11_VIRTUAL_FIXED_GET_FUNCTION_LIST($$counter)"; \
	    counter=`expr $$counter + 1`; \
	  done; \
	} > $@-t && \
	mv -f $@-t $@

all: virtual-fixed-generated.h
