/*====================================================================*
 * declarations
 *====================================================================*/
/*--------------------------------------------------------------------*
 * headers
 *--------------------------------------------------------------------*/
#include "tmUtil/tmUtil.hh"
#include "tmGrammar/Cut.hh"
#include "tmGrammar/CutGrammar.hh"


/*====================================================================*
 * implementation
 *====================================================================*/
namespace Cut
{
const reserved::value_type cut_names[] = {
  reserved::value_type(MU_ETA, 1),
  reserved::value_type(MU_PHI, 1),
  reserved::value_type(MU_CHG, 1),
  reserved::value_type(MU_QLTY, 1),
  reserved::value_type(MU_ISO, 1),

  reserved::value_type(EG_ETA, 1),
  reserved::value_type(EG_PHI, 1),
  reserved::value_type(EG_QLTY, 1),
  reserved::value_type(EG_ISO, 1),

  reserved::value_type(TAU_ETA, 1),
  reserved::value_type(TAU_PHI, 1),
  reserved::value_type(TAU_QLTY, 1),
  reserved::value_type(TAU_ISO, 1),

  reserved::value_type(JET_ETA, 1),
  reserved::value_type(JET_PHI, 1),
  reserved::value_type(JET_QLTY, 1),

  reserved::value_type(ETM_PHI, 1),
  reserved::value_type(HTM_PHI, 1),
  reserved::value_type(ETMHF_PHI, 1),

  reserved::value_type(DETA, 1),
  reserved::value_type(DPHI, 1),
  reserved::value_type(DR, 1),
  reserved::value_type(MASS, 1),
  reserved::value_type(CHGCOR, 1),
};
const int n_cut_names = sizeof(cut_names) / sizeof(cut_names[0]);
const reserved cutName(cut_names, cut_names + n_cut_names);


// ---------------------------------------------------------------------
// constructor & destructor
// ---------------------------------------------------------------------
// nope


// ---------------------------------------------------------------------
// methods
// ---------------------------------------------------------------------
void
Item::print()
{
  std::cout << "cut = ";
  for (size_t ii = 0; ii < name.size(); ii++)
  {
    std::cout << "'" << name.at(ii) << "' ";
  }
  std::cout << std::endl;
}


bool
parser(const std::string& token,
       Cut::Item& item)
{
  std::string::const_iterator begin = token.begin();
  std::string::const_iterator end = token.end();

  typedef std::string::const_iterator iterator_type;
  typedef cut_grammar<iterator_type> cut_grammar;
  using boost::spirit::ascii::space;

  cut_grammar g;
  bool r = phrase_parse(begin, end, g, space, item);

  if (not (r and begin == end))
  {
    TM_LOG_ERR("Cut::parser '" << token << "'");
    item.message += " Cut::parser '" + token + "'";
    return false;
  }

  return true;
}

} // namespace Cut
/* eof */
