#pragma once

#include <stdio.h>
#include "Virus.h"
#include "Structures.h"

void printVirus(struct Virus virus)
{
	printf("Virus\'s name: %s\n", virus.name);
	printf("Number of variants: %d\n", virus.variantsCount);
}

void printVariant(struct Variant variant, struct Virus virus)
{
	printf("Variant: %s\n", variant.name);
	printf("Origin: %s\n", variant.origin);
	printf("Discovered: %s\n", variant.dateDiscovered);
}