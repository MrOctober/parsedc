/* C++ code produced by gperf version 3.0.3 */
/* Command-line: gperf -L C++ -E -t /private/var/folders/mz/0fddgfkj4zs24lsx4v08tt4w0000gn/T/jpowell/parsedc-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/mz/0fddgfkj4zs24lsx4v08tt4w0000gn/T/jpowell/parsedc-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.dcgov.parsedc.ParsedcModule.h"


#line 13 "/private/var/folders/mz/0fddgfkj4zs24lsx4v08tt4w0000gn/T/jpowell/parsedc-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 1, duplicates = 0 */

class ParsedcBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
ParsedcBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
ParsedcBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 1,
      MIN_WORD_LENGTH = 31,
      MAX_WORD_LENGTH = 31,
      MIN_HASH_VALUE = 31,
      MAX_HASH_VALUE = 31
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 15 "/private/var/folders/mz/0fddgfkj4zs24lsx4v08tt4w0000gn/T/jpowell/parsedc-generated/KrollGeneratedBindings.gperf"
      {"com.dcgov.parsedc.ParsedcModule", ::com::dcgov::parsedc::ParsedcModule::bindProxy, ::com::dcgov::parsedc::ParsedcModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 16 "/private/var/folders/mz/0fddgfkj4zs24lsx4v08tt4w0000gn/T/jpowell/parsedc-generated/KrollGeneratedBindings.gperf"

