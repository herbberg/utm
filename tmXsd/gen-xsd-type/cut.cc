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

#include "gen-cut.hxx"

namespace tmxsdtree
{
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

namespace tmxsdtree
{
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace tmxsdtree
{
  ::std::auto_ptr< ::tmxsdtree::cut >
  cut_ (const ::std::string& u,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::tree::error_handler< char > h;

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        u, h, p, f));

    h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

    return ::std::auto_ptr< ::tmxsdtree::cut > (
      ::tmxsdtree::cut_ (
        d, f | ::xml_schema::flags::own_dom, p));
  }

  ::std::auto_ptr< ::tmxsdtree::cut >
  cut_ (const ::std::string& u,
        ::xml_schema::error_handler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        u, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    return ::std::auto_ptr< ::tmxsdtree::cut > (
      ::tmxsdtree::cut_ (
        d, f | ::xml_schema::flags::own_dom, p));
  }

  ::std::auto_ptr< ::tmxsdtree::cut >
  cut_ (const ::std::string& u,
        ::xercesc::DOMErrorHandler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        u, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    return ::std::auto_ptr< ::tmxsdtree::cut > (
      ::tmxsdtree::cut_ (
        d, f | ::xml_schema::flags::own_dom, p));
  }

  ::std::auto_ptr< ::tmxsdtree::cut >
  cut_ (::std::istream& is,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::tmxsdtree::cut_ (isrc, f, p);
  }

  ::std::auto_ptr< ::tmxsdtree::cut >
  cut_ (::std::istream& is,
        ::xml_schema::error_handler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::tmxsdtree::cut_ (isrc, h, f, p);
  }

  ::std::auto_ptr< ::tmxsdtree::cut >
  cut_ (::std::istream& is,
        ::xercesc::DOMErrorHandler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::sax::std_input_source isrc (is);
    return ::tmxsdtree::cut_ (isrc, h, f, p);
  }

  ::std::auto_ptr< ::tmxsdtree::cut >
  cut_ (::std::istream& is,
        const ::std::string& sid,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::tmxsdtree::cut_ (isrc, f, p);
  }

  ::std::auto_ptr< ::tmxsdtree::cut >
  cut_ (::std::istream& is,
        const ::std::string& sid,
        ::xml_schema::error_handler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0,
      (f & ::xml_schema::flags::keep_dom) == 0);

    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::tmxsdtree::cut_ (isrc, h, f, p);
  }

  ::std::auto_ptr< ::tmxsdtree::cut >
  cut_ (::std::istream& is,
        const ::std::string& sid,
        ::xercesc::DOMErrorHandler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::xml::sax::std_input_source isrc (is, sid);
    return ::tmxsdtree::cut_ (isrc, h, f, p);
  }

  ::std::auto_ptr< ::tmxsdtree::cut >
  cut_ (::xercesc::InputSource& i,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xsd::cxx::tree::error_handler< char > h;

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    h.throw_if_failed< ::xsd::cxx::tree::parsing< char > > ();

    return ::std::auto_ptr< ::tmxsdtree::cut > (
      ::tmxsdtree::cut_ (
        d, f | ::xml_schema::flags::own_dom, p));
  }

  ::std::auto_ptr< ::tmxsdtree::cut >
  cut_ (::xercesc::InputSource& i,
        ::xml_schema::error_handler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    return ::std::auto_ptr< ::tmxsdtree::cut > (
      ::tmxsdtree::cut_ (
        d, f | ::xml_schema::flags::own_dom, p));
  }

  ::std::auto_ptr< ::tmxsdtree::cut >
  cut_ (::xercesc::InputSource& i,
        ::xercesc::DOMErrorHandler& h,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::parse< char > (
        i, h, p, f));

    if (!d.get ())
      throw ::xsd::cxx::tree::parsing< char > ();

    return ::std::auto_ptr< ::tmxsdtree::cut > (
      ::tmxsdtree::cut_ (
        d, f | ::xml_schema::flags::own_dom, p));
  }

  ::std::auto_ptr< ::tmxsdtree::cut >
  cut_ (const ::xercesc::DOMDocument& doc,
        ::xml_schema::flags f,
        const ::xml_schema::properties& p)
  {
    if (f & ::xml_schema::flags::keep_dom)
    {
      ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
        static_cast< ::xercesc::DOMDocument* > (doc.cloneNode (true)));

      return ::std::auto_ptr< ::tmxsdtree::cut > (
        ::tmxsdtree::cut_ (
          d, f | ::xml_schema::flags::own_dom, p));
    }

    const ::xercesc::DOMElement& e (*doc.getDocumentElement ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (e));

    if (n.name () == "cut" &&
        n.namespace_ () == "http://www.cern.ch/tmxsd/1.0.0")
    {
      ::std::auto_ptr< ::tmxsdtree::cut > r (
        ::xsd::cxx::tree::traits< ::tmxsdtree::cut, char >::create (
          e, f, 0));
      return r;
    }

    throw ::xsd::cxx::tree::unexpected_element < char > (
      n.name (),
      n.namespace_ (),
      "cut",
      "http://www.cern.ch/tmxsd/1.0.0");
  }

  ::std::auto_ptr< ::tmxsdtree::cut >
  cut_ (::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d,
        ::xml_schema::flags f,
        const ::xml_schema::properties&)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > c (
      ((f & ::xml_schema::flags::keep_dom) &&
       !(f & ::xml_schema::flags::own_dom))
      ? static_cast< ::xercesc::DOMDocument* > (d->cloneNode (true))
      : 0);

    ::xercesc::DOMDocument& doc (c.get () ? *c : *d);
    const ::xercesc::DOMElement& e (*doc.getDocumentElement ());

    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (e));

    if (f & ::xml_schema::flags::keep_dom)
      doc.setUserData (::xml_schema::dom::tree_node_key,
                       (c.get () ? &c : &d),
                       0);

    if (n.name () == "cut" &&
        n.namespace_ () == "http://www.cern.ch/tmxsd/1.0.0")
    {
      ::std::auto_ptr< ::tmxsdtree::cut > r (
        ::xsd::cxx::tree::traits< ::tmxsdtree::cut, char >::create (
          e, f, 0));
      return r;
    }

    throw ::xsd::cxx::tree::unexpected_element < char > (
      n.name (),
      n.namespace_ (),
      "cut",
      "http://www.cern.ch/tmxsd/1.0.0");
  }
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

namespace tmxsdtree
{
  void
  cut_ (::std::ostream& o,
        const ::tmxsdtree::cut& s,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0);

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::tmxsdtree::cut_ (s, m, f));

    ::xsd::cxx::tree::error_handler< char > h;

    ::xsd::cxx::xml::dom::ostream_format_target t (o);
    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      h.throw_if_failed< ::xsd::cxx::tree::serialization< char > > ();
    }
  }

  void
  cut_ (::std::ostream& o,
        const ::tmxsdtree::cut& s,
        ::xml_schema::error_handler& h,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xsd::cxx::xml::auto_initializer i (
      (f & ::xml_schema::flags::dont_initialize) == 0);

    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::tmxsdtree::cut_ (s, m, f));
    ::xsd::cxx::xml::dom::ostream_format_target t (o);
    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      throw ::xsd::cxx::tree::serialization< char > ();
    }
  }

  void
  cut_ (::std::ostream& o,
        const ::tmxsdtree::cut& s,
        ::xercesc::DOMErrorHandler& h,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::tmxsdtree::cut_ (s, m, f));
    ::xsd::cxx::xml::dom::ostream_format_target t (o);
    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      throw ::xsd::cxx::tree::serialization< char > ();
    }
  }

  void
  cut_ (::xercesc::XMLFormatTarget& t,
        const ::tmxsdtree::cut& s,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::tmxsdtree::cut_ (s, m, f));

    ::xsd::cxx::tree::error_handler< char > h;

    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      h.throw_if_failed< ::xsd::cxx::tree::serialization< char > > ();
    }
  }

  void
  cut_ (::xercesc::XMLFormatTarget& t,
        const ::tmxsdtree::cut& s,
        ::xml_schema::error_handler& h,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::tmxsdtree::cut_ (s, m, f));
    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      throw ::xsd::cxx::tree::serialization< char > ();
    }
  }

  void
  cut_ (::xercesc::XMLFormatTarget& t,
        const ::tmxsdtree::cut& s,
        ::xercesc::DOMErrorHandler& h,
        const ::xml_schema::namespace_infomap& m,
        const ::std::string& e,
        ::xml_schema::flags f)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::tmxsdtree::cut_ (s, m, f));
    if (!::xsd::cxx::xml::dom::serialize (t, *d, e, h, f))
    {
      throw ::xsd::cxx::tree::serialization< char > ();
    }
  }

  void
  cut_ (::xercesc::DOMDocument& d,
        const ::tmxsdtree::cut& s,
        ::xml_schema::flags)
  {
    ::xercesc::DOMElement& e (*d.getDocumentElement ());
    const ::xsd::cxx::xml::qualified_name< char > n (
      ::xsd::cxx::xml::dom::name< char > (e));

    if (n.name () == "cut" &&
        n.namespace_ () == "http://www.cern.ch/tmxsd/1.0.0")
    {
      e << s;
    }
    else
    {
      throw ::xsd::cxx::tree::unexpected_element < char > (
        n.name (),
        n.namespace_ (),
        "cut",
        "http://www.cern.ch/tmxsd/1.0.0");
    }
  }

  ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument >
  cut_ (const ::tmxsdtree::cut& s,
        const ::xml_schema::namespace_infomap& m,
        ::xml_schema::flags f)
  {
    ::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d (
      ::xsd::cxx::xml::dom::serialize< char > (
        "cut",
        "http://www.cern.ch/tmxsd/1.0.0",
        m, f));

    ::tmxsdtree::cut_ (*d, s, f);
    return d;
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

