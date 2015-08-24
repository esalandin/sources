#include "utils.h"
#include "spiDefs.h"
#include "ProductInfo.h"

extern "C" void dumpdec(char *);

int main(int argc, char *argv[])
{
	extern ProductInfo productInfo;
	char *table_name_pattern="%";

	if (argc>1) {
		table_name_pattern= argv[1];
	}
	dumpdec(table_name_pattern);
	return(0);
}
