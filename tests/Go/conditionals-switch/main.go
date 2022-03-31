package main

import "fmt"

func main() {
	var x int = 102114 / 2564
	var y int = 1018362 * 102
	switch x {
	case 39:
		fmt.Println(1024 / 256)
		fmt.Println("X - T")
		fmt.Println(x)
	default:
		fmt.Println(1024 * 256)
		fmt.Println("X - F")
		fmt.Println(x)
	}
	switch y {
	case 9:
		fmt.Println(1024 / 256)
		fmt.Println("Y - T")
		fmt.Println(y)
	default:
		fmt.Println(1024 * 256)
		fmt.Println("Y - F")
		fmt.Println(y)
	}
}
