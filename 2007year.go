// https://www.acmicpc.net/problem/1924
// 2007년
package main

import "fmt"

const (
	SUN = iota
	MON
	TUE
	WED
	THU
	FRI
	SAT
)

func year() {
	var month, day, date int
	var dayName string
	fmt.Scan(&month, &day)

	for m := 1; m < month; m++ {
		if m == 4 || m == 6 || m == 9 || m == 11 {
			date += 30
		} else if m == 2 {
			date += 28
		} else {
			date += 31
		}
	}

	date += day

	week := date % 7

	switch week {
	case SUN:
		dayName = "SUN"
	case MON:
		dayName = "MON"
	case TUE:
		dayName = "TUE"
	case WED:
		dayName = "WED"
	case THU:
		dayName = "THU"
	case FRI:
		dayName = "FRI"
	case SAT:
		dayName = "SAT"
	}

	fmt.Println(dayName)
}
