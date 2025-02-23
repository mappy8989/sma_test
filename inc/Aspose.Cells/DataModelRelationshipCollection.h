// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DATAMODELS_DATAMODELRELATIONSHIPCOLLECTION_H
#define ASPOSE_CELLS_DATAMODELS_DATAMODELRELATIONSHIPCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace DataModels {
    class DataModelRelationship;
} } }

namespace Aspose { namespace Cells { namespace DataModels {

class DataModelRelationshipCollection_Impl;

/// <summary>
/// Represents the relationships.
/// </summary>
class DataModelRelationshipCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    DataModelRelationshipCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API DataModelRelationshipCollection(DataModelRelationshipCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API DataModelRelationshipCollection(const DataModelRelationshipCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~DataModelRelationshipCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API DataModelRelationshipCollection& operator=(const DataModelRelationshipCollection& src);
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
    /// Gets the relationship.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API DataModelRelationship Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
