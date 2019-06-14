package mypkg

import "testing"

func TestFn(t *testing.T) {
	if fn() != 1 {
		t.Error("Expected 1, found", fn())
	}
}
