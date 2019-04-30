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

#include "complex-ext_signal_set.hxx"

namespace tmxsdtree
{
  // ext_signal_set
  // 

  const ext_signal_set::name_type& ext_signal_set::
  name () const
  {
    return this->name_.get ();
  }

  ext_signal_set::name_type& ext_signal_set::
  name ()
  {
    return this->name_.get ();
  }

  void ext_signal_set::
  name (const name_type& x)
  {
    this->name_.set (x);
  }

  void ext_signal_set::
  name (::std::unique_ptr< name_type > x)
  {
    this->name_.set (std::move (x));
  }

  const ext_signal_set::comment_optional& ext_signal_set::
  comment () const
  {
    return this->comment_;
  }

  ext_signal_set::comment_optional& ext_signal_set::
  comment ()
  {
    return this->comment_;
  }

  void ext_signal_set::
  comment (const comment_type& x)
  {
    this->comment_.set (x);
  }

  void ext_signal_set::
  comment (const comment_optional& x)
  {
    this->comment_ = x;
  }

  void ext_signal_set::
  comment (::std::unique_ptr< comment_type > x)
  {
    this->comment_.set (std::move (x));
  }

  const ext_signal_set::ext_signal_sequence& ext_signal_set::
  ext_signal () const
  {
    return this->ext_signal_;
  }

  ext_signal_set::ext_signal_sequence& ext_signal_set::
  ext_signal ()
  {
    return this->ext_signal_;
  }

  void ext_signal_set::
  ext_signal (const ext_signal_sequence& s)
  {
    this->ext_signal_ = s;
  }

  const ext_signal_set::ext_signal_set_id_optional& ext_signal_set::
  ext_signal_set_id () const
  {
    return this->ext_signal_set_id_;
  }

  ext_signal_set::ext_signal_set_id_optional& ext_signal_set::
  ext_signal_set_id ()
  {
    return this->ext_signal_set_id_;
  }

  void ext_signal_set::
  ext_signal_set_id (const ext_signal_set_id_type& x)
  {
    this->ext_signal_set_id_.set (x);
  }

  void ext_signal_set::
  ext_signal_set_id (const ext_signal_set_id_optional& x)
  {
    this->ext_signal_set_id_ = x;
  }

  void ext_signal_set::
  ext_signal_set_id (::std::unique_ptr< ext_signal_set_id_type > x)
  {
    this->ext_signal_set_id_.set (std::move (x));
  }

  const ext_signal_set::datetime_optional& ext_signal_set::
  datetime () const
  {
    return this->datetime_;
  }

  ext_signal_set::datetime_optional& ext_signal_set::
  datetime ()
  {
    return this->datetime_;
  }

  void ext_signal_set::
  datetime (const datetime_type& x)
  {
    this->datetime_.set (x);
  }

  void ext_signal_set::
  datetime (const datetime_optional& x)
  {
    this->datetime_ = x;
  }

  void ext_signal_set::
  datetime (::std::unique_ptr< datetime_type > x)
  {
    this->datetime_.set (std::move (x));
  }

  const ext_signal_set::is_valid_optional& ext_signal_set::
  is_valid () const
  {
    return this->is_valid_;
  }

  ext_signal_set::is_valid_optional& ext_signal_set::
  is_valid ()
  {
    return this->is_valid_;
  }

  void ext_signal_set::
  is_valid (const is_valid_type& x)
  {
    this->is_valid_.set (x);
  }

  void ext_signal_set::
  is_valid (const is_valid_optional& x)
  {
    this->is_valid_ = x;
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

namespace tmxsdtree
{
  // ext_signal_set
  //

  ext_signal_set::
  ext_signal_set (const name_type& name)
  : ::xml_schema::type (),
    name_ (name, this),
    comment_ (this),
    ext_signal_ (this),
    ext_signal_set_id_ (this),
    datetime_ (this),
    is_valid_ (this)
  {
  }

  ext_signal_set::
  ext_signal_set (const ext_signal_set& x,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    name_ (x.name_, f, this),
    comment_ (x.comment_, f, this),
    ext_signal_ (x.ext_signal_, f, this),
    ext_signal_set_id_ (x.ext_signal_set_id_, f, this),
    datetime_ (x.datetime_, f, this),
    is_valid_ (x.is_valid_, f, this)
  {
  }

  ext_signal_set::
  ext_signal_set (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    name_ (this),
    comment_ (this),
    ext_signal_ (this),
    ext_signal_set_id_ (this),
    datetime_ (this),
    is_valid_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
      this->parse (p, f);
    }
  }

  void ext_signal_set::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    for (; p.more_content (); p.next_content (false))
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // name
      //
      if (n.name () == "name" && n.namespace_ ().empty ())
      {
        ::std::unique_ptr< name_type > r (
          name_traits::create (i, f, this));

        if (!name_.present ())
        {
          this->name_.set (::std::move (r));
          continue;
        }
      }

      // comment
      //
      if (n.name () == "comment" && n.namespace_ ().empty ())
      {
        ::std::unique_ptr< comment_type > r (
          comment_traits::create (i, f, this));

        if (!this->comment_)
        {
          this->comment_.set (::std::move (r));
          continue;
        }
      }

      // ext_signal
      //
      if (n.name () == "ext_signal" && n.namespace_ ().empty ())
      {
        ::std::unique_ptr< ext_signal_type > r (
          ext_signal_traits::create (i, f, this));

        this->ext_signal_.push_back (::std::move (r));
        continue;
      }

      break;
    }

    if (!name_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "name",
        "");
    }

    while (p.more_attributes ())
    {
      const ::xercesc::DOMAttr& i (p.next_attribute ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      if (n.name () == "ext_signal_set_id" && n.namespace_ ().empty ())
      {
        this->ext_signal_set_id_.set (ext_signal_set_id_traits::create (i, f, this));
        continue;
      }

      if (n.name () == "datetime" && n.namespace_ ().empty ())
      {
        this->datetime_.set (datetime_traits::create (i, f, this));
        continue;
      }

      if (n.name () == "is_valid" && n.namespace_ ().empty ())
      {
        this->is_valid_.set (is_valid_traits::create (i, f, this));
        continue;
      }
    }
  }

  ext_signal_set* ext_signal_set::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class ext_signal_set (*this, f, c);
  }

  ext_signal_set& ext_signal_set::
  operator= (const ext_signal_set& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::type& > (*this) = x;
      this->name_ = x.name_;
      this->comment_ = x.comment_;
      this->ext_signal_ = x.ext_signal_;
      this->ext_signal_set_id_ = x.ext_signal_set_id_;
      this->datetime_ = x.datetime_;
      this->is_valid_ = x.is_valid_;
    }

    return *this;
  }

  ext_signal_set::
  ~ext_signal_set ()
  {
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace tmxsdtree
{
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

namespace tmxsdtree
{
  void
  operator<< (::xercesc::DOMElement& e, const ext_signal_set& i)
  {
    e << static_cast< const ::xml_schema::type& > (i);

    // name
    //
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "name",
          e));

      s << i.name ();
    }

    // comment
    //
    if (i.comment ())
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "comment",
          e));

      s << *i.comment ();
    }

    // ext_signal
    //
    for (ext_signal_set::ext_signal_const_iterator
         b (i.ext_signal ().begin ()), n (i.ext_signal ().end ());
         b != n; ++b)
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "ext_signal",
          e));

      s << *b;
    }

    // ext_signal_set_id
    //
    if (i.ext_signal_set_id ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "ext_signal_set_id",
          e));

      a << *i.ext_signal_set_id ();
    }

    // datetime
    //
    if (i.datetime ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "datetime",
          e));

      a << *i.datetime ();
    }

    // is_valid
    //
    if (i.is_valid ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "is_valid",
          e));

      a << *i.is_valid ();
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

