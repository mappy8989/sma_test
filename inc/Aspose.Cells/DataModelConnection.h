// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXTERNALCONNECTIONS_DATAMODELCONNECTION_H
#define ASPOSE_CELLS_EXTERNALCONNECTIONS_DATAMODELCONNECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ExternalConnection.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ExternalConnectionClassType.h"
#include "Aspose.Cells/OLEDBCommandType.h"

namespace Aspose { namespace Cells { namespace ExternalConnections {

using namespace Aspose::Cells;

class DataModelConnection_Impl;

/// <summary>
/// Specifies a data model connection
/// </summary>
class DataModelConnection : public ExternalConnection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DataModelConnection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DataModelConnection(DataModelConnection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DataModelConnection(const DataModelConnection& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API DataModelConnection(const ExternalConnection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DataModelConnection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DataModelConnection& operator=(const DataModelConnection& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// Gets the type of this <see cref="ExternalConnection"/> object.
    /// </summary>
    ASPOSE_CELLS_API ExternalConnectionClassType GetClassType();
    /// <summary>
    /// The string containing the database command to pass to the data provider API that will
    /// interact with the external source in order to retrieve data
    /// </summary>
    ASPOSE_CELLS_API U16String GetCommand();
    /// <summary>
    /// The string containing the database command to pass to the data provider API that will
    /// interact with the external source in order to retrieve data
    /// </summary>
    ASPOSE_CELLS_API void SetCommand(const U16String& value);
    /// <summary>
    /// The string containing the database command to pass to the data provider API that will
    /// interact with the external source in order to retrieve data
    /// </summary>
    ASPOSE_CELLS_API void SetCommand(const char16_t* value);
    /// <summary>
    /// Returns <see cref="OLEDBCommandType"/> type.
    /// </summary>
    ASPOSE_CELLS_API OLEDBCommandType GetCommandType();
    /// <summary>
    /// Returns <see cref="OLEDBCommandType"/> type.
    /// </summary>
    ASPOSE_CELLS_API void SetCommandType(OLEDBCommandType value);
    /// <summary>
    /// The connection information string is used to make contact with an OLE DB or ODBC data source.
    /// </summary>
    ASPOSE_CELLS_API U16String GetConnectionString();
    /// <summary>
    /// The connection information string is used to make contact with an OLE DB or ODBC data source.
    /// </summary>
    ASPOSE_CELLS_API void SetConnectionString(const U16String& value);
    /// <summary>
    /// The connection information string is used to make contact with an OLE DB or ODBC data source.
    /// </summary>
    ASPOSE_CELLS_API void SetConnectionString(const char16_t* value);
    
};

} } }

#endif
