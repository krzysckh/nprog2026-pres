int
main(void)
{
  int x = 0;
  asm("int1");
  x += 1;
  asm("int1");

  return 0;
}
