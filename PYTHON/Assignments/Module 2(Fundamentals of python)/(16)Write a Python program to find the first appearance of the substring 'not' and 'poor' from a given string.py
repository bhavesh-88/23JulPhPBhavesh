#Write a Python program to find the first appearance of the substring
#'not' and 'poor' from a given string, if 'not' follows the 'poor', replace the
#whole 'not'...'poor' substring with 'good'. Return the resulting string.
def not_poor(s):
    snot=s.find('not')
    spoor=s.find('poor')
    
    if spoor >snot and snot>0 and spoor>0:
        s=s.replace(s[snot:(spoor+4)],'good')
        return s
    else:
        return s
print(not_poor("The lyrices is not that poor"))
print(not_poor("The lyrics is poor"))
