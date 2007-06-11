//
// Copyright (C) 2004-2006 Maciej Sobczak, Stephen Hutton
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//

#define SOCI_EMPTY_SOURCE
#include "soci-empty.h"

#ifdef _MSC_VER
#pragma warning(disable:4355)
#endif

using namespace soci;
using namespace soci::details;


empty_statement_backend::empty_statement_backend(empty_session_backend &session)
    : session_(session)
{
}

void empty_statement_backend::alloc()
{
    // ...
}

void empty_statement_backend::clean_up()
{
    // ...
}

void empty_statement_backend::prepare(std::string const & /* query */,
    eStatementType /* eType */)
{
    // ...
}

statement_backend::execFetchResult
empty_statement_backend::execute(int /* number */)
{
    // ...
    return eSuccess;
}

statement_backend::execFetchResult
empty_statement_backend::fetch(int /* number */)
{
    // ...
    return eSuccess;
}

int empty_statement_backend::get_number_of_rows()
{
    // ...
    return 1;
}

std::string empty_statement_backend::rewrite_for_procedure_call(
    std::string const &query)
{
    return query;
}

int empty_statement_backend::prepare_for_describe()
{
    // ...
    return 0;
}

void empty_statement_backend::describe_column(int /* colNum */,
    eDataType & /* type */, std::string & /* columnName */)
{
    // ...
}

empty_standard_into_type_backend * empty_statement_backend::make_into_type_backend()
{
    return new empty_standard_into_type_backend(*this);
}

empty_standard_use_type_backend * empty_statement_backend::make_use_type_backend()
{
    return new empty_standard_use_type_backend(*this);
}

empty_vector_into_type_backend *
empty_statement_backend::make_vector_into_type_backend()
{
    return new empty_vector_into_type_backend(*this);
}

empty_vector_use_type_backend * empty_statement_backend::make_vector_use_type_backend()
{
    return new empty_vector_use_type_backend(*this);
}
