prog=words
setup() {
  load 'bats-support/load'
  load 'bats-assert/load'
}

@test "Chaîne vide" {
    run ./$prog ""
    assert_success
    assert_line --index 0 "Analyzing the argument ''"
    assert_line --index 1 "Is palindrome? yes"
    assert_line --index 2 "Has double? no"
}
