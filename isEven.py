#thank god we use decimals and not exagesimal or worse
def isEven(num: int):
  nstr = str(num)
  if nstr[-1] == '1':
    return False
  elif nstr[-1] == '2':
    return True
  elif nstr[-1] == '3':
    return False
  elif nstr[-1] == '4':
    return True
  elif nstr[-1] == '5':
    return False
  elif nstr[-1] == '6':
    return True
  elif nstr[-1] == '7':
    return False
  elif nstr[-1] == '8':
    return True
  elif nstr[-1] == '9':
    return False
  elif nstr[-1] == '0':
    return True
