// https://www.acmicpc.net/problem/1065
// 한수
package main

import (
	"fmt"
)

func han() int {
	var number int
	var count int

	fmt.Scan(&number)
	if number > 1000 {
		return 0
	} else if number < 100 {
		count = number
		return count
	} else {
		count = 99
		for i := 100; i <= number; i++ {
			// 세자리 숫자 각 자리수 구해서 배열에 저장
			a := i / 100
			b := (i / 10) % 10
			c := i % 10

			if a-b == b-c {
				count++
			}
		}
		return count
	}
}
