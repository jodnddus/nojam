// https://www.acmicpc.net/problem/11365
// !밀비 급일
package main

import (
	"bufio"
	"fmt"
	"os"
)

func decipher() {
	in := bufio.NewReader(os.Stdin)

	for true {
		var cryptogram string
		cryptogram, _ = in.ReadString('\n')

		if cryptogram == "END\n" {
			break
		}

		for iterator := len(cryptogram) - 2; iterator >= 0; iterator-- {
			fmt.Printf("%c", cryptogram[iterator])
		}

		fmt.Print("\n")
	}
}
