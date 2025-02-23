﻿// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.

#include "Aspose.Cells/AboveAverage.h"
#include "Aspose.Cells/AbstractCalculationEngine.h"
#include "Aspose.Cells/AbstractFormulaChangeMonitor.h"
#include "Aspose.Cells/AbstractInterruptMonitor.h"
#include "Aspose.Cells/AbstractTextLoadOptions.h"
#include "Aspose.Cells/AccentEquationNode.h"
#include "Aspose.Cells/AccessCacheOptions.h"
#include "Aspose.Cells/ActiveXControl.h"
#include "Aspose.Cells/ActiveXControlBase.h"
#include "Aspose.Cells/ActiveXPersistenceType.h"
#include "Aspose.Cells/AdjustFontSizeForRowType.h"
#include "Aspose.Cells/AdvancedFilter.h"
#include "Aspose.Cells/ArcShape.h"
#include "Aspose.Cells/Area.h"
#include "Aspose.Cells/ArrayEquationNode.h"
#include "Aspose.Cells/AutoFillType.h"
#include "Aspose.Cells/AutoFilter.h"
#include "Aspose.Cells/AutoFitMergedCellsType.h"
#include "Aspose.Cells/AutoFitterOptions.h"
#include "Aspose.Cells/AutoFitWrappedTextType.h"
#include "Aspose.Cells/AutomaticFill.h"
#include "Aspose.Cells/AutoNumberedBulletValue.h"
#include "Aspose.Cells/AutoShapeType.h"
#include "Aspose.Cells/Axis.h"
#include "Aspose.Cells/AxisBins.h"
#include "Aspose.Cells/AxisType.h"
#include "Aspose.Cells/BackgroundMode.h"
#include "Aspose.Cells/BackgroundType.h"
#include "Aspose.Cells/Bar3DShapeType.h"
#include "Aspose.Cells/BarEquationNode.h"
#include "Aspose.Cells/BaseShapeGuide.h"
#include "Aspose.Cells/Bevel.h"
#include "Aspose.Cells/BevelPresetType.h"
#include "Aspose.Cells/BevelType.h"
#include "Aspose.Cells/Border.h"
#include "Aspose.Cells/BorderBoxEquationNode.h"
#include "Aspose.Cells/BorderCollection.h"
#include "Aspose.Cells/BorderType.h"
#include "Aspose.Cells/BoxEquationNode.h"
#include "Aspose.Cells/BubbleSizeRepresents.h"
#include "Aspose.Cells/BuiltInDocumentPropertyCollection.h"
#include "Aspose.Cells/BuiltinStyleType.h"
#include "Aspose.Cells/Bullet.h"
#include "Aspose.Cells/BulletType.h"
#include "Aspose.Cells/BulletValue.h"
#include "Aspose.Cells/Button.h"
#include "Aspose.Cells/CalcModeType.h"
#include "Aspose.Cells/CalculationCell.h"
#include "Aspose.Cells/CalculationData.h"
#include "Aspose.Cells/CalculationOptions.h"
#include "Aspose.Cells/CalculationPrecisionStrategy.h"
#include "Aspose.Cells/CategoryType.h"
#include "Aspose.Cells/Cell.h"
#include "Aspose.Cells/CellArea.h"
#include "Aspose.Cells/CellBorderType.h"
#include "Aspose.Cells/CellRichValue.h"
#include "Aspose.Cells/Cells.h"
#include "Aspose.Cells/CellsColor.h"
#include "Aspose.Cells/CellsDrawing.h"
#include "Aspose.Cells/CellsException.h"
#include "Aspose.Cells/CellsFactory.h"
#include "Aspose.Cells/CellsHelper.h"
#include "Aspose.Cells/CellsUnitType.h"
#include "Aspose.Cells/CellValue.h"
#include "Aspose.Cells/CellValueFormatStrategy.h"
#include "Aspose.Cells/CellValueType.h"
#include "Aspose.Cells/CellWatch.h"
#include "Aspose.Cells/CellWatchCollection.h"
#include "Aspose.Cells/CharacterBulletValue.h"
#include "Aspose.Cells/Chart.h"
#include "Aspose.Cells/ChartArea.h"
#include "Aspose.Cells/ChartCalculateOptions.h"
#include "Aspose.Cells/ChartCollection.h"
#include "Aspose.Cells/ChartDataTable.h"
#include "Aspose.Cells/ChartFrame.h"
#include "Aspose.Cells/ChartGlobalizationSettings.h"
#include "Aspose.Cells/ChartLineFormattingType.h"
#include "Aspose.Cells/ChartMarkerType.h"
#include "Aspose.Cells/ChartPoint.h"
#include "Aspose.Cells/ChartPointCollection.h"
#include "Aspose.Cells/ChartShape.h"
#include "Aspose.Cells/ChartSplitType.h"
#include "Aspose.Cells/ChartTextDirectionType.h"
#include "Aspose.Cells/ChartTextFrame.h"
#include "Aspose.Cells/ChartType.h"
#include "Aspose.Cells/CheckBox.h"
#include "Aspose.Cells/CheckBoxActiveXControl.h"
#include "Aspose.Cells/CheckBoxCollection.h"
#include "Aspose.Cells/CheckValueType.h"
#include "Aspose.Cells/Color.h"
#include "Aspose.Cells/ColorDepth.h"
#include "Aspose.Cells/ColorFilter.h"
#include "Aspose.Cells/ColorHelper.h"
#include "Aspose.Cells/ColorScale.h"
#include "Aspose.Cells/ColorType.h"
#include "Aspose.Cells/Column.h"
#include "Aspose.Cells/ColumnCollection.h"
#include "Aspose.Cells/ComboBox.h"
#include "Aspose.Cells/ComboBoxActiveXControl.h"
#include "Aspose.Cells/CommandButtonActiveXControl.h"
#include "Aspose.Cells/Comment.h"
#include "Aspose.Cells/CommentCollection.h"
#include "Aspose.Cells/CommentShape.h"
#include "Aspose.Cells/CommentTitleType.h"
#include "Aspose.Cells/ConditionalFormattingCollection.h"
#include "Aspose.Cells/ConditionalFormattingIcon.h"
#include "Aspose.Cells/ConditionalFormattingIconCollection.h"
#include "Aspose.Cells/ConditionalFormattingResult.h"
#include "Aspose.Cells/ConditionalFormattingValue.h"
#include "Aspose.Cells/ConditionalFormattingValueCollection.h"
#include "Aspose.Cells/ConnectionDataSourceType.h"
#include "Aspose.Cells/ConnectionParameter.h"
#include "Aspose.Cells/ConnectionParameterCollection.h"
#include "Aspose.Cells/ConnectionParameterType.h"
#include "Aspose.Cells/ConsolidationFunction.h"
#include "Aspose.Cells/ContentDisposition.h"
#include "Aspose.Cells/ContentTypeProperty.h"
#include "Aspose.Cells/ContentTypePropertyCollection.h"
#include "Aspose.Cells/ControlBorderType.h"
#include "Aspose.Cells/ControlCaptionAlignmentType.h"
#include "Aspose.Cells/ControlListStyle.h"
#include "Aspose.Cells/ControlMatchEntryType.h"
#include "Aspose.Cells/ControlMousePointerType.h"
#include "Aspose.Cells/ControlPictureAlignmentType.h"
#include "Aspose.Cells/ControlPicturePositionType.h"
#include "Aspose.Cells/ControlPictureSizeMode.h"
#include "Aspose.Cells/ControlScrollBarType.h"
#include "Aspose.Cells/ControlScrollOrientation.h"
#include "Aspose.Cells/ControlSpecialEffectType.h"
#include "Aspose.Cells/ControlType.h"
#include "Aspose.Cells/ConversionUtility.h"
#include "Aspose.Cells/CopyFormatType.h"
#include "Aspose.Cells/CopyOptions.h"
#include "Aspose.Cells/CountryCode.h"
#include "Aspose.Cells/CredentialsMethodType.h"
#include "Aspose.Cells/CrossType.h"
#include "Aspose.Cells/CustomDocumentPropertyCollection.h"
#include "Aspose.Cells/CustomFilter.h"
#include "Aspose.Cells/CustomFilterCollection.h"
#include "Aspose.Cells/CustomFunctionDefinition.h"
#include "Aspose.Cells/CustomGeometry.h"
#include "Aspose.Cells/CustomPiovtFieldGroupItem.h"
#include "Aspose.Cells/CustomProperty.h"
#include "Aspose.Cells/CustomPropertyCollection.h"
#include "Aspose.Cells/CustomXmlPart.h"
#include "Aspose.Cells/CustomXmlPartCollection.h"
#include "Aspose.Cells/CustomXmlShape.h"
#include "Aspose.Cells/DataBar.h"
#include "Aspose.Cells/DataBarAxisPosition.h"
#include "Aspose.Cells/DataBarBorder.h"
#include "Aspose.Cells/DataBarBorderType.h"
#include "Aspose.Cells/DataBarFillType.h"
#include "Aspose.Cells/DataBarNegativeColorType.h"
#include "Aspose.Cells/DataLabels.h"
#include "Aspose.Cells/DataLabelShapeType.h"
#include "Aspose.Cells/DataLabelsSeparatorType.h"
#include "Aspose.Cells/DataMashup.h"
#include "Aspose.Cells/DataModel.h"
#include "Aspose.Cells/DataModelConnection.h"
#include "Aspose.Cells/DataModelRelationship.h"
#include "Aspose.Cells/DataModelRelationshipCollection.h"
#include "Aspose.Cells/DataModelTable.h"
#include "Aspose.Cells/DataModelTableCollection.h"
#include "Aspose.Cells/DataSorter.h"
#include "Aspose.Cells/DataSorterKey.h"
#include "Aspose.Cells/DataSorterKeyCollection.h"
#include "Aspose.Cells/Date.h"
#include "Aspose.Cells/DateTimeGroupingType.h"
#include "Aspose.Cells/DateTimeGroupItem.h"
#include "Aspose.Cells/DBConnection.h"
#include "Aspose.Cells/DbfLoadOptions.h"
#include "Aspose.Cells/DbfSaveOptions.h"
#include "Aspose.Cells/DefaultEditLanguage.h"
#include "Aspose.Cells/DefaultStyleSettings.h"
#include "Aspose.Cells/DeleteBlankOptions.h"
#include "Aspose.Cells/DeleteOptions.h"
#include "Aspose.Cells/DelimiterEquationNode.h"
#include "Aspose.Cells/Dialog_Box.h"
#include "Aspose.Cells/DifLoadOptions.h"
#include "Aspose.Cells/DifSaveOptions.h"
#include "Aspose.Cells/DigitalSignature.h"
#include "Aspose.Cells/DigitalSignatureCollection.h"
#include "Aspose.Cells/DirectoryType.h"
#include "Aspose.Cells/DisplayDrawingObjects.h"
#include "Aspose.Cells/DisplayUnitLabel.h"
#include "Aspose.Cells/DisplayUnitType.h"
#include "Aspose.Cells/DocumentProperty.h"
#include "Aspose.Cells/DocumentPropertyCollection.h"
#include "Aspose.Cells/DocxSaveOptions.h"
#include "Aspose.Cells/DrawObject.h"
#include "Aspose.Cells/DrawObjectEnum.h"
#include "Aspose.Cells/DrawObjectEventHandler.h"
#include "Aspose.Cells/DropBars.h"
#include "Aspose.Cells/DropButtonStyle.h"
#include "Aspose.Cells/DxfCollection.h"
#include "Aspose.Cells/DynamicFilter.h"
#include "Aspose.Cells/DynamicFilterType.h"
#include "Aspose.Cells/EbookLoadOptions.h"
#include "Aspose.Cells/EbookSaveOptions.h"
#include "Aspose.Cells/EmfRenderSetting.h"
#include "Aspose.Cells/EncodingType.h"
#include "Aspose.Cells/EncryptionType.h"
#include "Aspose.Cells/Enumerator.h"
#include "Aspose.Cells/EquationCharacterPositionType.h"
#include "Aspose.Cells/EquationCombiningCharacterType.h"
#include "Aspose.Cells/EquationComponentNode.h"
#include "Aspose.Cells/EquationDelimiterShapeType.h"
#include "Aspose.Cells/EquationFractionType.h"
#include "Aspose.Cells/EquationHorizontalJustificationType.h"
#include "Aspose.Cells/EquationLimitLocationType.h"
#include "Aspose.Cells/EquationMathematicalOperatorType.h"
#include "Aspose.Cells/EquationNode.h"
#include "Aspose.Cells/EquationNodeParagraph.h"
#include "Aspose.Cells/EquationNodeType.h"
#include "Aspose.Cells/EquationVerticalJustificationType.h"
#include "Aspose.Cells/ErrorBar.h"
#include "Aspose.Cells/ErrorBarDisplayType.h"
#include "Aspose.Cells/ErrorBarType.h"
#include "Aspose.Cells/ErrorCellValueType.h"
#include "Aspose.Cells/ErrorCheckOption.h"
#include "Aspose.Cells/ErrorCheckOptionCollection.h"
#include "Aspose.Cells/ErrorCheckType.h"
#include "Aspose.Cells/ExceptionType.h"
#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ExportRangeToJsonOptions.h"
#include "Aspose.Cells/ExternalConnection.h"
#include "Aspose.Cells/ExternalConnectionClassType.h"
#include "Aspose.Cells/ExternalConnectionCollection.h"
#include "Aspose.Cells/ExternalLink.h"
#include "Aspose.Cells/ExternalLinkCollection.h"
#include "Aspose.Cells/ExternalLinkType.h"
#include "Aspose.Cells/FileFontSource.h"
#include "Aspose.Cells/FileFormatInfo.h"
#include "Aspose.Cells/FileFormatType.h"
#include "Aspose.Cells/FileFormatUtil.h"
#include "Aspose.Cells/FillFormat.h"
#include "Aspose.Cells/FillPattern.h"
#include "Aspose.Cells/FillPictureType.h"
#include "Aspose.Cells/FillType.h"
#include "Aspose.Cells/FilterCategory.h"
#include "Aspose.Cells/FilterColumn.h"
#include "Aspose.Cells/FilterColumnCollection.h"
#include "Aspose.Cells/FilterOperatorType.h"
#include "Aspose.Cells/FilterType.h"
#include "Aspose.Cells/FindOptions.h"
#include "Aspose.Cells/Floor.h"
#include "Aspose.Cells/FolderFontSource.h"
#include "Aspose.Cells/Font.h"
#include "Aspose.Cells/FontConfigs.h"
#include "Aspose.Cells/FontSchemeType.h"
#include "Aspose.Cells/FontSetting.h"
#include "Aspose.Cells/FontSettingCollection.h"
#include "Aspose.Cells/FontSourceBase.h"
#include "Aspose.Cells/FontSourceType.h"
#include "Aspose.Cells/FontUnderlineType.h"
#include "Aspose.Cells/Format3D.h"
#include "Aspose.Cells/FormatCondition.h"
#include "Aspose.Cells/FormatConditionCollection.h"
#include "Aspose.Cells/FormatConditionType.h"
#include "Aspose.Cells/FormatConditionValueType.h"
#include "Aspose.Cells/FormatSetType.h"
#include "Aspose.Cells/FormattingType.h"
#include "Aspose.Cells/FormulaParseOptions.h"
#include "Aspose.Cells/FormulaSettings.h"
#include "Aspose.Cells/FractionEquationNode.h"
#include "Aspose.Cells/FunctionEquationNode.h"
#include "Aspose.Cells/Geometry.h"
#include "Aspose.Cells/GlobalizationSettings.h"
#include "Aspose.Cells/GlowEffect.h"
#include "Aspose.Cells/GradientColorType.h"
#include "Aspose.Cells/GradientDirectionType.h"
#include "Aspose.Cells/GradientFill.h"
#include "Aspose.Cells/GradientFillType.h"
#include "Aspose.Cells/GradientPresetType.h"
#include "Aspose.Cells/GradientStop.h"
#include "Aspose.Cells/GradientStopCollection.h"
#include "Aspose.Cells/GradientStyleType.h"
#include "Aspose.Cells/GridlineType.h"
#include "Aspose.Cells/GroupBox.h"
#include "Aspose.Cells/GroupCharacterEquationNode.h"
#include "Aspose.Cells/GroupFill.h"
#include "Aspose.Cells/GroupShape.h"
#include "Aspose.Cells/HeaderFooterCommand.h"
#include "Aspose.Cells/HeaderFooterCommandType.h"
#include "Aspose.Cells/HighlightChangesOptions.h"
#include "Aspose.Cells/HorizontalPageBreak.h"
#include "Aspose.Cells/HorizontalPageBreakCollection.h"
#include "Aspose.Cells/HtmlCrossType.h"
#include "Aspose.Cells/HtmlExportDataOptions.h"
#include "Aspose.Cells/HtmlFormatHandlingType.h"
#include "Aspose.Cells/HtmlHiddenColDisplayType.h"
#include "Aspose.Cells/HtmlHiddenRowDisplayType.h"
#include "Aspose.Cells/HtmlLinkTargetType.h"
#include "Aspose.Cells/HtmlLoadOptions.h"
#include "Aspose.Cells/HtmlOfficeMathOutputType.h"
#include "Aspose.Cells/HtmlSaveOptions.h"
#include "Aspose.Cells/HtmlTableLoadOption.h"
#include "Aspose.Cells/HtmlTableLoadOptionCollection.h"
#include "Aspose.Cells/HtmlVersion.h"
#include "Aspose.Cells/Hyperlink.h"
#include "Aspose.Cells/HyperlinkCollection.h"
#include "Aspose.Cells/HyperlinkType.h"
#include "Aspose.Cells/IconFilter.h"
#include "Aspose.Cells/IconSet.h"
#include "Aspose.Cells/IconSetType.h"
#include "Aspose.Cells/IFilePathProvider.h"
#include "Aspose.Cells/ImageActiveXControl.h"
#include "Aspose.Cells/ImageBinarizationMethod.h"
#include "Aspose.Cells/ImageOrPrintOptions.h"
#include "Aspose.Cells/ImageSaveOptions.h"
#include "Aspose.Cells/ImageType.h"
#include "Aspose.Cells/ImportTableOptions.h"
#include "Aspose.Cells/IndividualFontConfigs.h"
#include "Aspose.Cells/Initializer.h"
#include "Aspose.Cells/InputMethodEditorMode.h"
#include "Aspose.Cells/InsertOptions.h"
#include "Aspose.Cells/InterruptMonitor.h"
#include "Aspose.Cells/IPageSavingCallback.h"
#include "Aspose.Cells/IWarningCallback.h"
#include "Aspose.Cells/JsonExportHyperlinkType.h"
#include "Aspose.Cells/JsonLayoutOptions.h"
#include "Aspose.Cells/JsonLoadOptions.h"
#include "Aspose.Cells/JsonSaveOptions.h"
#include "Aspose.Cells/JsonUtility.h"
#include "Aspose.Cells/Label.h"
#include "Aspose.Cells/LabelActiveXControl.h"
#include "Aspose.Cells/LabelPositionType.h"
#include "Aspose.Cells/Legend.h"
#include "Aspose.Cells/LegendEntry.h"
#include "Aspose.Cells/LegendEntryCollection.h"
#include "Aspose.Cells/LegendPositionType.h"
#include "Aspose.Cells/License.h"
#include "Aspose.Cells/LightCellsDataHandler.h"
#include "Aspose.Cells/LightCellsDataProvider.h"
#include "Aspose.Cells/LightRigDirectionType.h"
#include "Aspose.Cells/LightRigType.h"
#include "Aspose.Cells/LimLowUppEquationNode.h"
#include "Aspose.Cells/Line.h"
#include "Aspose.Cells/LineCapType.h"
#include "Aspose.Cells/LineFormat.h"
#include "Aspose.Cells/LineJoinType.h"
#include "Aspose.Cells/LineShape.h"
#include "Aspose.Cells/LineSpaceSizeType.h"
#include "Aspose.Cells/LineType.h"
#include "Aspose.Cells/ListBox.h"
#include "Aspose.Cells/ListBoxActiveXControl.h"
#include "Aspose.Cells/ListColumn.h"
#include "Aspose.Cells/ListColumnCollection.h"
#include "Aspose.Cells/ListObject.h"
#include "Aspose.Cells/ListObjectCollection.h"
#include "Aspose.Cells/LoadDataFilterOptions.h"
#include "Aspose.Cells/LoadFilter.h"
#include "Aspose.Cells/LoadFormat.h"
#include "Aspose.Cells/LoadNumbersTableType.h"
#include "Aspose.Cells/LoadOptions.h"
#include "Aspose.Cells/LookAtType.h"
#include "Aspose.Cells/LookInType.h"
#include "Aspose.Cells/MapChartLabelLayout.h"
#include "Aspose.Cells/MapChartProjectionType.h"
#include "Aspose.Cells/MapChartRegionType.h"
#include "Aspose.Cells/MarkdownSaveOptions.h"
#include "Aspose.Cells/Marker.h"
#include "Aspose.Cells/MathematicalEquationNode.h"
#include "Aspose.Cells/MatrixEquationNode.h"
#include "Aspose.Cells/MemoryFontSource.h"
#include "Aspose.Cells/MemorySetting.h"
#include "Aspose.Cells/MergedCellsShrinkType.h"
#include "Aspose.Cells/MergeEmptyTdType.h"
#include "Aspose.Cells/MetadataOptions.h"
#include "Aspose.Cells/MetadataType.h"
#include "Aspose.Cells/MirrorType.h"
#include "Aspose.Cells/MsoArrowheadLength.h"
#include "Aspose.Cells/MsoArrowheadStyle.h"
#include "Aspose.Cells/MsoArrowheadWidth.h"
#include "Aspose.Cells/MsoDrawingType.h"
#include "Aspose.Cells/MsoFillFormat.h"
#include "Aspose.Cells/MsoFillFormatHelper.h"
#include "Aspose.Cells/MsoFormatPicture.h"
#include "Aspose.Cells/MsoLineDashStyle.h"
#include "Aspose.Cells/MsoLineFormat.h"
#include "Aspose.Cells/MsoLineFormatHelper.h"
#include "Aspose.Cells/MsoLineStyle.h"
#include "Aspose.Cells/MsoPresetTextEffect.h"
#include "Aspose.Cells/MsoPresetTextEffectShape.h"
#include "Aspose.Cells/MsoTextFrame.h"
#include "Aspose.Cells/MultipleFilterCollection.h"
#include "Aspose.Cells/Name.h"
#include "Aspose.Cells/NameCollection.h"
#include "Aspose.Cells/NameScopeType.h"
#include "Aspose.Cells/NaryEquationNode.h"
#include "Aspose.Cells/NegativeBarFormat.h"
#include "Aspose.Cells/NoneBulletValue.h"
#include "Aspose.Cells/NoneFill.h"
#include "Aspose.Cells/NumberCategoryType.h"
#include "Aspose.Cells/NumbersLoadOptions.h"
#include "Aspose.Cells/Object.h"
#include "Aspose.Cells/ObjectType.h"
#include "Aspose.Cells/OdsCellField.h"
#include "Aspose.Cells/OdsCellFieldCollection.h"
#include "Aspose.Cells/OdsCellFieldType.h"
#include "Aspose.Cells/OdsGeneratorType.h"
#include "Aspose.Cells/OdsLoadOptions.h"
#include "Aspose.Cells/OdsPageBackground.h"
#include "Aspose.Cells/OdsPageBackgroundGraphicPositionType.h"
#include "Aspose.Cells/OdsPageBackgroundGraphicType.h"
#include "Aspose.Cells/OdsPageBackgroundType.h"
#include "Aspose.Cells/OdsSaveOptions.h"
#include "Aspose.Cells/OLEDBCommandType.h"
#include "Aspose.Cells/OleObject.h"
#include "Aspose.Cells/OleObjectCollection.h"
#include "Aspose.Cells/OoxmlCompliance.h"
#include "Aspose.Cells/OoxmlCompressionType.h"
#include "Aspose.Cells/OoxmlSaveOptions.h"
#include "Aspose.Cells/OpenDocumentFormatVersionType.h"
#include "Aspose.Cells/OperatorType.h"
#include "Aspose.Cells/Outline.h"
#include "Aspose.Cells/Oval.h"
#include "Aspose.Cells/PageEndSavingArgs.h"
#include "Aspose.Cells/PageLayoutAlignmentType.h"
#include "Aspose.Cells/PageOrientationType.h"
#include "Aspose.Cells/PageSavingArgs.h"
#include "Aspose.Cells/PageSetup.h"
#include "Aspose.Cells/PageStartSavingArgs.h"
#include "Aspose.Cells/PaginatedSaveOptions.h"
#include "Aspose.Cells/PaneCollection.h"
#include "Aspose.Cells/PaneStateType.h"
#include "Aspose.Cells/PaperSizeType.h"
#include "Aspose.Cells/ParameterType.h"
#include "Aspose.Cells/PasteOperationType.h"
#include "Aspose.Cells/PasteOptions.h"
#include "Aspose.Cells/PasteType.h"
#include "Aspose.Cells/PatternFill.h"
#include "Aspose.Cells/PclSaveOptions.h"
#include "Aspose.Cells/PdfBookmarkEntry.h"
#include "Aspose.Cells/PdfCompliance.h"
#include "Aspose.Cells/PdfCompressionCore.h"
#include "Aspose.Cells/PdfCustomPropertiesExport.h"
#include "Aspose.Cells/PdfFontEncoding.h"
#include "Aspose.Cells/PdfOptimizationType.h"
#include "Aspose.Cells/PdfSaveOptions.h"
#include "Aspose.Cells/PdfSecurityOptions.h"
#include "Aspose.Cells/PicFormatOption.h"
#include "Aspose.Cells/Picture.h"
#include "Aspose.Cells/PictureBulletValue.h"
#include "Aspose.Cells/PictureCollection.h"
#include "Aspose.Cells/PivotArea.h"
#include "Aspose.Cells/PivotAreaCollection.h"
#include "Aspose.Cells/PivotAreaFilter.h"
#include "Aspose.Cells/PivotAreaFilterCollection.h"
#include "Aspose.Cells/PivotAreaType.h"
#include "Aspose.Cells/PivotConditionalFormat.h"
#include "Aspose.Cells/PivotConditionalFormatCollection.h"
#include "Aspose.Cells/PivotConditionFormatRuleType.h"
#include "Aspose.Cells/PivotConditionFormatScopeType.h"
#include "Aspose.Cells/PivotDateTimeRangeGroupSettings.h"
#include "Aspose.Cells/PivotDiscreteGroupSettings.h"
#include "Aspose.Cells/PivotField.h"
#include "Aspose.Cells/PivotFieldCollection.h"
#include "Aspose.Cells/PivotFieldDataDisplayFormat.h"
#include "Aspose.Cells/PivotFieldGroupSettings.h"
#include "Aspose.Cells/PivotFieldGroupType.h"
#include "Aspose.Cells/PivotFieldSortSetting.h"
#include "Aspose.Cells/PivotFieldSubtotalType.h"
#include "Aspose.Cells/PivotFieldType.h"
#include "Aspose.Cells/PivotFilter.h"
#include "Aspose.Cells/PivotFilterCollection.h"
#include "Aspose.Cells/PivotFilterType.h"
#include "Aspose.Cells/PivotFormatCondition.h"
#include "Aspose.Cells/PivotFormatConditionCollection.h"
#include "Aspose.Cells/PivotGlobalizationSettings.h"
#include "Aspose.Cells/PivotGroupByType.h"
#include "Aspose.Cells/PivotItem.h"
#include "Aspose.Cells/PivotItemCollection.h"
#include "Aspose.Cells/PivotItemPosition.h"
#include "Aspose.Cells/PivotItemPositionType.h"
#include "Aspose.Cells/PivotLineType.h"
#include "Aspose.Cells/PivotMissingItemLimitType.h"
#include "Aspose.Cells/PivotNumbericRangeGroupSettings.h"
#include "Aspose.Cells/PivotOptions.h"
#include "Aspose.Cells/PivotPageFields.h"
#include "Aspose.Cells/PivotRefreshState.h"
#include "Aspose.Cells/PivotShowValuesSetting.h"
#include "Aspose.Cells/PivotTable.h"
#include "Aspose.Cells/PivotTableAutoFormatType.h"
#include "Aspose.Cells/PivotTableCalculateOption.h"
#include "Aspose.Cells/PivotTableCollection.h"
#include "Aspose.Cells/PivotTableFormat.h"
#include "Aspose.Cells/PivotTableFormatCollection.h"
#include "Aspose.Cells/PivotTableRefreshOption.h"
#include "Aspose.Cells/PivotTableSelectionType.h"
#include "Aspose.Cells/PivotTableSourceType.h"
#include "Aspose.Cells/PivotTableStyleType.h"
#include "Aspose.Cells/PlacementType.h"
#include "Aspose.Cells/PlotArea.h"
#include "Aspose.Cells/PlotDataByType.h"
#include "Aspose.Cells/PlotEmptyCellsType.h"
#include "Aspose.Cells/PowerQueryFormula.h"
#include "Aspose.Cells/PowerQueryFormulaCollection.h"
#include "Aspose.Cells/PowerQueryFormulaFunction.h"
#include "Aspose.Cells/PowerQueryFormulaItem.h"
#include "Aspose.Cells/PowerQueryFormulaItemCollection.h"
#include "Aspose.Cells/PowerQueryFormulaParameter.h"
#include "Aspose.Cells/PowerQueryFormulaParameterCollection.h"
#include "Aspose.Cells/PowerQueryFormulaType.h"
#include "Aspose.Cells/PptxSaveOptions.h"
#include "Aspose.Cells/PresetCameraType.h"
#include "Aspose.Cells/PresetMaterialType.h"
#include "Aspose.Cells/PresetShadowType.h"
#include "Aspose.Cells/PresetThemeGradientType.h"
#include "Aspose.Cells/PresetWordArtStyle.h"
#include "Aspose.Cells/PrintCommentsType.h"
#include "Aspose.Cells/PrintErrorsType.h"
#include "Aspose.Cells/PrintingPageType.h"
#include "Aspose.Cells/PrintOrderType.h"
#include "Aspose.Cells/PrintSizeType.h"
#include "Aspose.Cells/PropertyType.h"
#include "Aspose.Cells/ProtectedRange.h"
#include "Aspose.Cells/ProtectedRangeCollection.h"
#include "Aspose.Cells/Protection.h"
#include "Aspose.Cells/ProtectionType.h"
#include "Aspose.Cells/QuartileCalculationType.h"
#include "Aspose.Cells/QueryTable.h"
#include "Aspose.Cells/QueryTableCollection.h"
#include "Aspose.Cells/RadicalEquationNode.h"
#include "Aspose.Cells/RadioButton.h"
#include "Aspose.Cells/RadioButtonActiveXControl.h"
#include "Aspose.Cells/Range.h"
#include "Aspose.Cells/RangeCollection.h"
#include "Aspose.Cells/ReConnectionMethodType.h"
#include "Aspose.Cells/RectangleAlignmentType.h"
#include "Aspose.Cells/RectangleShape.h"
#include "Aspose.Cells/ReferredArea.h"
#include "Aspose.Cells/ReferredAreaCollection.h"
#include "Aspose.Cells/ReflectionEffect.h"
#include "Aspose.Cells/ReflectionEffectType.h"
#include "Aspose.Cells/RenameStrategy.h"
#include "Aspose.Cells/RenderingFont.h"
#include "Aspose.Cells/RenderingWatermark.h"
#include "Aspose.Cells/ReplaceOptions.h"
#include "Aspose.Cells/ReserveMissingPivotItemType.h"
#include "Aspose.Cells/ResourceLoadingType.h"
#include "Aspose.Cells/Revision.h"
#include "Aspose.Cells/RevisionActionType.h"
#include "Aspose.Cells/RevisionAutoFormat.h"
#include "Aspose.Cells/RevisionCellChange.h"
#include "Aspose.Cells/RevisionCellComment.h"
#include "Aspose.Cells/RevisionCellMove.h"
#include "Aspose.Cells/RevisionCollection.h"
#include "Aspose.Cells/RevisionCustomView.h"
#include "Aspose.Cells/RevisionDefinedName.h"
#include "Aspose.Cells/RevisionFormat.h"
#include "Aspose.Cells/RevisionHeader.h"
#include "Aspose.Cells/RevisionInsertDelete.h"
#include "Aspose.Cells/RevisionInsertSheet.h"
#include "Aspose.Cells/RevisionLog.h"
#include "Aspose.Cells/RevisionLogCollection.h"
#include "Aspose.Cells/RevisionMergeConflict.h"
#include "Aspose.Cells/RevisionQueryTable.h"
#include "Aspose.Cells/RevisionRenameSheet.h"
#include "Aspose.Cells/RevisionType.h"
#include "Aspose.Cells/Row.h"
#include "Aspose.Cells/RowCollection.h"
#include "Aspose.Cells/SaveFormat.h"
#include "Aspose.Cells/SaveOptions.h"
#include "Aspose.Cells/Scenario.h"
#include "Aspose.Cells/ScenarioCollection.h"
#include "Aspose.Cells/ScenarioInputCell.h"
#include "Aspose.Cells/ScenarioInputCellCollection.h"
#include "Aspose.Cells/ScrollBar.h"
#include "Aspose.Cells/ScrollBarActiveXControl.h"
#include "Aspose.Cells/SelectionType.h"
#include "Aspose.Cells/Series.h"
#include "Aspose.Cells/SeriesCollection.h"
#include "Aspose.Cells/SeriesLayoutProperties.h"
#include "Aspose.Cells/SettableChartGlobalizationSettings.h"
#include "Aspose.Cells/SettableGlobalizationSettings.h"
#include "Aspose.Cells/SettablePivotGlobalizationSettings.h"
#include "Aspose.Cells/ShadowEffect.h"
#include "Aspose.Cells/Shape.h"
#include "Aspose.Cells/ShapeAnchorType.h"
#include "Aspose.Cells/ShapeCollection.h"
#include "Aspose.Cells/ShapeGuide.h"
#include "Aspose.Cells/ShapeGuideCollection.h"
#include "Aspose.Cells/ShapeLockType.h"
#include "Aspose.Cells/ShapePath.h"
#include "Aspose.Cells/ShapePathCollection.h"
#include "Aspose.Cells/ShapePathPoint.h"
#include "Aspose.Cells/ShapePathPointCollection.h"
#include "Aspose.Cells/ShapePathType.h"
#include "Aspose.Cells/ShapePropertyCollection.h"
#include "Aspose.Cells/ShapeSegmentPath.h"
#include "Aspose.Cells/ShapeSegmentPathCollection.h"
#include "Aspose.Cells/ShapeTextAlignment.h"
#include "Aspose.Cells/ShapeTextVerticalAlignmentType.h"
#include "Aspose.Cells/SheetPrintingPreview.h"
#include "Aspose.Cells/SheetRender.h"
#include "Aspose.Cells/SheetSet.h"
#include "Aspose.Cells/SheetType.h"
#include "Aspose.Cells/ShiftType.h"
#include "Aspose.Cells/ShowDropButtonType.h"
#include "Aspose.Cells/SignatureLine.h"
#include "Aspose.Cells/SignatureType.h"
#include "Aspose.Cells/Slicer.h"
#include "Aspose.Cells/SlicerCache.h"
#include "Aspose.Cells/SlicerCacheCrossFilterType.h"
#include "Aspose.Cells/SlicerCacheItem.h"
#include "Aspose.Cells/SlicerCacheItemCollection.h"
#include "Aspose.Cells/SlicerCacheItemSortType.h"
#include "Aspose.Cells/SlicerCollection.h"
#include "Aspose.Cells/SlicerStyleType.h"
#include "Aspose.Cells/SlideViewType.h"
#include "Aspose.Cells/SmartArtShape.h"
#include "Aspose.Cells/SmartTag.h"
#include "Aspose.Cells/SmartTagCollection.h"
#include "Aspose.Cells/SmartTagOptions.h"
#include "Aspose.Cells/SmartTagProperty.h"
#include "Aspose.Cells/SmartTagPropertyCollection.h"
#include "Aspose.Cells/SmartTagSetting.h"
#include "Aspose.Cells/SmartTagShowType.h"
#include "Aspose.Cells/SolidFill.h"
#include "Aspose.Cells/SortOnType.h"
#include "Aspose.Cells/SortOrder.h"
#include "Aspose.Cells/Sparkline.h"
#include "Aspose.Cells/SparklineAxisMinMaxType.h"
#include "Aspose.Cells/SparklineCollection.h"
#include "Aspose.Cells/SparklineGroup.h"
#include "Aspose.Cells/SparklineGroupCollection.h"
#include "Aspose.Cells/SparklinePresetStyleType.h"
#include "Aspose.Cells/SparklineType.h"
#include "Aspose.Cells/SpinButtonActiveXControl.h"
#include "Aspose.Cells/Spinner.h"
#include "Aspose.Cells/SpreadsheetML2003SaveOptions.h"
#include "Aspose.Cells/SqlDataType.h"
#include "Aspose.Cells/SqlScriptColumnTypeMap.h"
#include "Aspose.Cells/SqlScriptOperatorType.h"
#include "Aspose.Cells/SqlScriptSaveOptions.h"
#include "Aspose.Cells/Style.h"
#include "Aspose.Cells/StyleFlag.h"
#include "Aspose.Cells/StyleModifyFlag.h"
#include "Aspose.Cells/SubSupEquationNode.h"
#include "Aspose.Cells/SubtotalSetting.h"
#include "Aspose.Cells/SystemTimeInterruptMonitor.h"
#include "Aspose.Cells/TableDataSourceType.h"
#include "Aspose.Cells/TableStyle.h"
#include "Aspose.Cells/TableStyleCollection.h"
#include "Aspose.Cells/TableStyleElement.h"
#include "Aspose.Cells/TableStyleElementCollection.h"
#include "Aspose.Cells/TableStyleElementType.h"
#include "Aspose.Cells/TableStyleType.h"
#include "Aspose.Cells/TableToRangeOptions.h"
#include "Aspose.Cells/TargetModeType.h"
#include "Aspose.Cells/TextAlignmentType.h"
#include "Aspose.Cells/TextAutonumberScheme.h"
#include "Aspose.Cells/TextBox.h"
#include "Aspose.Cells/TextBoxActiveXControl.h"
#include "Aspose.Cells/TextBoxCollection.h"
#include "Aspose.Cells/TextBoxOptions.h"
#include "Aspose.Cells/TextCapsType.h"
#include "Aspose.Cells/TextCrossType.h"
#include "Aspose.Cells/TextDirectionType.h"
#include "Aspose.Cells/TextEffectFormat.h"
#include "Aspose.Cells/TextFontAlignType.h"
#include "Aspose.Cells/TextNodeType.h"
#include "Aspose.Cells/TextOptions.h"
#include "Aspose.Cells/TextOrientationType.h"
#include "Aspose.Cells/TextOverflowType.h"
#include "Aspose.Cells/TextParagraph.h"
#include "Aspose.Cells/TextParagraphCollection.h"
#include "Aspose.Cells/TextRunEquationNode.h"
#include "Aspose.Cells/TextStrikeType.h"
#include "Aspose.Cells/TextTabAlignmentType.h"
#include "Aspose.Cells/TextTabStop.h"
#include "Aspose.Cells/TextTabStopCollection.h"
#include "Aspose.Cells/TextureFill.h"
#include "Aspose.Cells/TextureType.h"
#include "Aspose.Cells/TextVerticalType.h"
#include "Aspose.Cells/ThemeColor.h"
#include "Aspose.Cells/ThemeColorType.h"
#include "Aspose.Cells/ThreadedComment.h"
#include "Aspose.Cells/ThreadedCommentAuthor.h"
#include "Aspose.Cells/ThreadedCommentAuthorCollection.h"
#include "Aspose.Cells/ThreadedCommentCollection.h"
#include "Aspose.Cells/ThreeDFormat.h"
#include "Aspose.Cells/TickLabelAlignmentType.h"
#include "Aspose.Cells/TickLabelItem.h"
#include "Aspose.Cells/TickLabelPositionType.h"
#include "Aspose.Cells/TickLabels.h"
#include "Aspose.Cells/TickMarkType.h"
#include "Aspose.Cells/TiffCompression.h"
#include "Aspose.Cells/TilePicOption.h"
#include "Aspose.Cells/Timeline.h"
#include "Aspose.Cells/TimelineCollection.h"
#include "Aspose.Cells/TimePeriodType.h"
#include "Aspose.Cells/TimeUnit.h"
#include "Aspose.Cells/Title.h"
#include "Aspose.Cells/ToggleButtonActiveXControl.h"
#include "Aspose.Cells/Top10.h"
#include "Aspose.Cells/Top10Filter.h"
#include "Aspose.Cells/TotalsCalculation.h"
#include "Aspose.Cells/Trendline.h"
#include "Aspose.Cells/TrendlineCollection.h"
#include "Aspose.Cells/TrendlineType.h"
#include "Aspose.Cells/TwoColorGradient.h"
#include "Aspose.Cells/TxtLoadOptions.h"
#include "Aspose.Cells/TxtLoadStyleStrategy.h"
#include "Aspose.Cells/TxtSaveOptions.h"
#include "Aspose.Cells/TxtValueQuoteType.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/UnionRange.h"
#include "Aspose.Cells/UnknowEquationNode.h"
#include "Aspose.Cells/UnknownControl.h"
#include "Aspose.Cells/UpdateLinksType.h"
#include "Aspose.Cells/UUID.h"
#include "Aspose.Cells/Validation.h"
#include "Aspose.Cells/ValidationAlertType.h"
#include "Aspose.Cells/ValidationCollection.h"
#include "Aspose.Cells/ValidationType.h"
#include "Aspose.Cells/VbaModule.h"
#include "Aspose.Cells/VbaModuleCollection.h"
#include "Aspose.Cells/VbaModuleType.h"
#include "Aspose.Cells/VbaProject.h"
#include "Aspose.Cells/VbaProjectReference.h"
#include "Aspose.Cells/VbaProjectReferenceCollection.h"
#include "Aspose.Cells/VbaProjectReferenceType.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/VerticalPageBreak.h"
#include "Aspose.Cells/VerticalPageBreakCollection.h"
#include "Aspose.Cells/ViewType.h"
#include "Aspose.Cells/VisibilityType.h"
#include "Aspose.Cells/VmlShapeGuide.h"
#include "Aspose.Cells/Walls.h"
#include "Aspose.Cells/WarningInfo.h"
#include "Aspose.Cells/WarningType.h"
#include "Aspose.Cells/WebExtension.h"
#include "Aspose.Cells/WebExtensionBinding.h"
#include "Aspose.Cells/WebExtensionBindingCollection.h"
#include "Aspose.Cells/WebExtensionCollection.h"
#include "Aspose.Cells/WebExtensionProperty.h"
#include "Aspose.Cells/WebExtensionPropertyCollection.h"
#include "Aspose.Cells/WebExtensionReference.h"
#include "Aspose.Cells/WebExtensionReferenceCollection.h"
#include "Aspose.Cells/WebExtensionShape.h"
#include "Aspose.Cells/WebExtensionStoreType.h"
#include "Aspose.Cells/WebExtensionTaskPane.h"
#include "Aspose.Cells/WebExtensionTaskPaneCollection.h"
#include "Aspose.Cells/WebQueryConnection.h"
#include "Aspose.Cells/WeightType.h"
#include "Aspose.Cells/Workbook.h"
#include "Aspose.Cells/WorkbookMetadata.h"
#include "Aspose.Cells/WorkbookPrintingPreview.h"
#include "Aspose.Cells/WorkbookRender.h"
#include "Aspose.Cells/WorkbookSettings.h"
#include "Aspose.Cells/Worksheet.h"
#include "Aspose.Cells/WorksheetCollection.h"
#include "Aspose.Cells/WriteProtection.h"
#include "Aspose.Cells/XAdESType.h"
#include "Aspose.Cells/XlsbSaveOptions.h"
#include "Aspose.Cells/XlsSaveOptions.h"
#include "Aspose.Cells/XmlColumnProperty.h"
#include "Aspose.Cells/XmlDataBinding.h"
#include "Aspose.Cells/XmlLoadOptions.h"
#include "Aspose.Cells/XmlMap.h"
#include "Aspose.Cells/XmlMapCollection.h"
#include "Aspose.Cells/XmlSaveOptions.h"
#include "Aspose.Cells/XpsSaveOptions.h"
