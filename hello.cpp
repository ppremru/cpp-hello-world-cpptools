/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Red Hat, Inc. All rights reserved.
 *  Licensed under the MIT License. See LICENSE in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
#include <iostream>
#include <stdio.h>

int main()
{
    printf("hello\n");
    int number;
    std::cin >> number;
    std::cout << "you entered " << number << std::endl;
    return 0;
}
