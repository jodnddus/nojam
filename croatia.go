// https://www.acmicpc.net/problem/2941
// 크로아티아 알파벳

package main

import "fmt"
import "strings"

func croatia() {
	var str string
	var croatiaString [8]string = [8]string{"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="}

	fmt.Scan(&str)

	for i := 0; i < 8; i++ {
		str = strings.ReplaceAll(str, croatiaString[i], "a")
	}

	fmt.Println(len(str))
}
