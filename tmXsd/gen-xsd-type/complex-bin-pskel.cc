// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "complex-bin-pskel.hh"

namespace tmxsd
{
  // bin_pskel
  //

  void bin_pskel::
  number_parser (::xml_schema::unsigned_int_pskel& p)
  {
    this->number_parser_ = &p;
  }

  void bin_pskel::
  minimum_parser (::tmxsd::real_pskel& p)
  {
    this->minimum_parser_ = &p;
  }

  void bin_pskel::
  maximum_parser (::tmxsd::real_pskel& p)
  {
    this->maximum_parser_ = &p;
  }

  void bin_pskel::
  bin_id_parser (::tmxsd::id_pskel& p)
  {
    this->bin_id_parser_ = &p;
  }

  void bin_pskel::
  scale_id_parser (::tmxsd::id_pskel& p)
  {
    this->scale_id_parser_ = &p;
  }

  void bin_pskel::
  parsers (::xml_schema::unsigned_int_pskel& number,
           ::tmxsd::real_pskel& minimum,
           ::tmxsd::real_pskel& maximum,
           ::tmxsd::id_pskel& bin_id,
           ::tmxsd::id_pskel& scale_id)
  {
    this->number_parser_ = &number;
    this->minimum_parser_ = &minimum;
    this->maximum_parser_ = &maximum;
    this->bin_id_parser_ = &bin_id;
    this->scale_id_parser_ = &scale_id;
  }

  bin_pskel::
  bin_pskel ()
  : number_parser_ (0),
    minimum_parser_ (0),
    maximum_parser_ (0),
    bin_id_parser_ (0),
    scale_id_parser_ (0),
    v_state_stack_ (sizeof (v_state_), &v_state_first_)
  {
  }
}

namespace tmxsd
{
  // bin_pskel
  //

  void bin_pskel::
  number (unsigned int)
  {
  }

  void bin_pskel::
  minimum (const std::string&)
  {
  }

  void bin_pskel::
  maximum (const std::string&)
  {
  }

  void bin_pskel::
  bin_id (unsigned int)
  {
  }

  void bin_pskel::
  scale_id (unsigned int)
  {
  }
}

#include <cassert>

namespace tmxsd
{
  // Element validation and dispatch functions for bin_pskel.
  //
  bool bin_pskel::
  _start_element_impl (const ::xml_schema::ro_string& ns,
                       const ::xml_schema::ro_string& n,
                       const ::xml_schema::ro_string* t)
  {
    XSD_UNUSED (t);

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_* vd = vs.data + (vs.size - 1);

    if (vd->func == 0 && vd->state == 0)
    {
      if (this->::xml_schema::complex_content::_start_element_impl (ns, n, t))
        return true;
      else
        vd->state = 1;
    }

    while (vd->func != 0)
    {
      (this->*vd->func) (vd->state, vd->count, ns, n, t, true);

      vd = vs.data + (vs.size - 1);

      if (vd->state == ~0UL)
        vd = vs.data + (--vs.size - 1);
      else
        break;
    }

    if (vd->func == 0)
    {
      if (vd->state != ~0UL)
      {
        unsigned long s = ~0UL;

        if (n == "number" && ns.empty ())
          s = 0UL;

        if (s != ~0UL)
        {
          vd->count++;
          vd->state = ~0UL;

          vd = vs.data + vs.size++;
          vd->func = &bin_pskel::sequence_0;
          vd->state = s;
          vd->count = 0;

          this->sequence_0 (vd->state, vd->count, ns, n, t, true);
        }
        else
        {
          if (vd->count < 1UL)
            this->_expected_element (
              "", "number",
              ns, n);
          return false;
        }
      }
      else
        return false;
    }

    return true;
  }

  bool bin_pskel::
  _end_element_impl (const ::xml_schema::ro_string& ns,
                     const ::xml_schema::ro_string& n)
  {
    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_& vd = vs.data[vs.size - 1];

    if (vd.func == 0 && vd.state == 0)
    {
      if (!::xml_schema::complex_content::_end_element_impl (ns, n))
        assert (false);
      return true;
    }

    assert (vd.func != 0);
    (this->*vd.func) (vd.state, vd.count, ns, n, 0, false);

    if (vd.state == ~0UL)
      vs.size--;

    return true;
  }

  void bin_pskel::
  _pre_e_validate ()
  {
    this->v_state_stack_.push ();
    static_cast< v_state_* > (this->v_state_stack_.top ())->size = 0;

    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_& vd = vs.data[vs.size++];

    vd.func = 0;
    vd.state = 0;
    vd.count = 0;
  }

  void bin_pskel::
  _post_e_validate ()
  {
    v_state_& vs = *static_cast< v_state_* > (this->v_state_stack_.top ());
    v_state_descr_* vd = vs.data + (vs.size - 1);

    ::xml_schema::ro_string empty;
    while (vd->func != 0)
    {
      (this->*vd->func) (vd->state, vd->count, empty, empty, 0, true);
      assert (vd->state == ~0UL);
      vd = vs.data + (--vs.size - 1);
    }

    if (vd->count < 1UL)
      this->_expected_element (
        "", "number");

    this->v_state_stack_.pop ();
  }

  void bin_pskel::
  sequence_0 (unsigned long& state,
              unsigned long& count,
              const ::xml_schema::ro_string& ns,
              const ::xml_schema::ro_string& n,
              const ::xml_schema::ro_string* t,
              bool start)
  {
    XSD_UNUSED (t);

    switch (state)
    {
      case 0UL:
      {
        if (n == "number" && ns.empty ())
        {
          if (start)
          {
            this->::xml_schema::complex_content::context_.top ().parser_ = this->number_parser_;

            if (this->number_parser_)
              this->number_parser_->pre ();
          }
          else
          {
            if (this->number_parser_)
            {
              unsigned int tmp (this->number_parser_->post_unsigned_int ());
              this->number (tmp);
            }

            count = 0;
            state = 1UL;
          }

          break;
        }
        else
        {
          assert (start);
          if (count < 1UL)
            this->_expected_element (
              "", "number",
              ns, n);
          count = 0;
          state = 1UL;
          // Fall through.
        }
      }
      case 1UL:
      {
        if (n == "minimum" && ns.empty ())
        {
          if (start)
          {
            this->::xml_schema::complex_content::context_.top ().parser_ = this->minimum_parser_;

            if (this->minimum_parser_)
              this->minimum_parser_->pre ();
          }
          else
          {
            if (this->minimum_parser_)
            {
              const std::string& tmp (this->minimum_parser_->post_real ());
              this->minimum (tmp);
            }

            count = 0;
            state = 2UL;
          }

          break;
        }
        else
        {
          assert (start);
          if (count < 1UL)
            this->_expected_element (
              "", "minimum",
              ns, n);
          count = 0;
          state = 2UL;
          // Fall through.
        }
      }
      case 2UL:
      {
        if (n == "maximum" && ns.empty ())
        {
          if (start)
          {
            this->::xml_schema::complex_content::context_.top ().parser_ = this->maximum_parser_;

            if (this->maximum_parser_)
              this->maximum_parser_->pre ();
          }
          else
          {
            if (this->maximum_parser_)
            {
              const std::string& tmp (this->maximum_parser_->post_real ());
              this->maximum (tmp);
            }

            count = 0;
            state = ~0UL;
          }

          break;
        }
        else
        {
          assert (start);
          if (count < 1UL)
            this->_expected_element (
              "", "maximum",
              ns, n);
          count = 0;
          state = ~0UL;
          // Fall through.
        }
      }
      case ~0UL:
        break;
    }
  }
}

namespace tmxsd
{
  // Attribute validation and dispatch functions for bin_pskel.
  //
  bool bin_pskel::
  _attribute_impl_phase_one (const ::xml_schema::ro_string& ns,
                             const ::xml_schema::ro_string& n,
                             const ::xml_schema::ro_string& s)
  {
    if (n == "bin_id" && ns.empty ())
    {
      if (this->bin_id_parser_)
      {
        this->bin_id_parser_->pre ();
        this->bin_id_parser_->_pre_impl ();
        this->bin_id_parser_->_characters (s);
        this->bin_id_parser_->_post_impl ();
        unsigned int tmp (this->bin_id_parser_->post_id ());
        this->bin_id (tmp);
      }

      return true;
    }

    if (n == "scale_id" && ns.empty ())
    {
      if (this->scale_id_parser_)
      {
        this->scale_id_parser_->pre ();
        this->scale_id_parser_->_pre_impl ();
        this->scale_id_parser_->_characters (s);
        this->scale_id_parser_->_post_impl ();
        unsigned int tmp (this->scale_id_parser_->post_id ());
        this->scale_id (tmp);
      }

      return true;
    }

    return false;
  }
}

namespace tmxsd
{
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

