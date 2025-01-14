//
// ComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqDamCoreImplAnnotationPdfAnnotationPdfConfigProperties: Codable {

    public var cqDamConfigAnnotationPdfDocumentWidth: ConfigNodePropertyInteger?
    public var cqDamConfigAnnotationPdfDocumentHeight: ConfigNodePropertyInteger?
    public var cqDamConfigAnnotationPdfDocumentPaddingHorizontal: ConfigNodePropertyInteger?
    public var cqDamConfigAnnotationPdfDocumentPaddingVertical: ConfigNodePropertyInteger?
    public var cqDamConfigAnnotationPdfFontSize: ConfigNodePropertyInteger?
    public var cqDamConfigAnnotationPdfFontColor: ConfigNodePropertyString?
    public var cqDamConfigAnnotationPdfFontFamily: ConfigNodePropertyString?
    public var cqDamConfigAnnotationPdfFontLight: ConfigNodePropertyString?
    public var cqDamConfigAnnotationPdfMarginTextImage: ConfigNodePropertyInteger?
    public var cqDamConfigAnnotationPdfMinImageHeight: ConfigNodePropertyInteger?
    public var cqDamConfigAnnotationPdfReviewStatusWidth: ConfigNodePropertyInteger?
    public var cqDamConfigAnnotationPdfReviewStatusColorApproved: ConfigNodePropertyString?
    public var cqDamConfigAnnotationPdfReviewStatusColorRejected: ConfigNodePropertyString?
    public var cqDamConfigAnnotationPdfReviewStatusColorChangesRequested: ConfigNodePropertyString?
    public var cqDamConfigAnnotationPdfAnnotationMarkerWidth: ConfigNodePropertyInteger?
    public var cqDamConfigAnnotationPdfAssetMinheight: ConfigNodePropertyInteger?

    public init(cqDamConfigAnnotationPdfDocumentWidth: ConfigNodePropertyInteger?, cqDamConfigAnnotationPdfDocumentHeight: ConfigNodePropertyInteger?, cqDamConfigAnnotationPdfDocumentPaddingHorizontal: ConfigNodePropertyInteger?, cqDamConfigAnnotationPdfDocumentPaddingVertical: ConfigNodePropertyInteger?, cqDamConfigAnnotationPdfFontSize: ConfigNodePropertyInteger?, cqDamConfigAnnotationPdfFontColor: ConfigNodePropertyString?, cqDamConfigAnnotationPdfFontFamily: ConfigNodePropertyString?, cqDamConfigAnnotationPdfFontLight: ConfigNodePropertyString?, cqDamConfigAnnotationPdfMarginTextImage: ConfigNodePropertyInteger?, cqDamConfigAnnotationPdfMinImageHeight: ConfigNodePropertyInteger?, cqDamConfigAnnotationPdfReviewStatusWidth: ConfigNodePropertyInteger?, cqDamConfigAnnotationPdfReviewStatusColorApproved: ConfigNodePropertyString?, cqDamConfigAnnotationPdfReviewStatusColorRejected: ConfigNodePropertyString?, cqDamConfigAnnotationPdfReviewStatusColorChangesRequested: ConfigNodePropertyString?, cqDamConfigAnnotationPdfAnnotationMarkerWidth: ConfigNodePropertyInteger?, cqDamConfigAnnotationPdfAssetMinheight: ConfigNodePropertyInteger?) {
        self.cqDamConfigAnnotationPdfDocumentWidth = cqDamConfigAnnotationPdfDocumentWidth
        self.cqDamConfigAnnotationPdfDocumentHeight = cqDamConfigAnnotationPdfDocumentHeight
        self.cqDamConfigAnnotationPdfDocumentPaddingHorizontal = cqDamConfigAnnotationPdfDocumentPaddingHorizontal
        self.cqDamConfigAnnotationPdfDocumentPaddingVertical = cqDamConfigAnnotationPdfDocumentPaddingVertical
        self.cqDamConfigAnnotationPdfFontSize = cqDamConfigAnnotationPdfFontSize
        self.cqDamConfigAnnotationPdfFontColor = cqDamConfigAnnotationPdfFontColor
        self.cqDamConfigAnnotationPdfFontFamily = cqDamConfigAnnotationPdfFontFamily
        self.cqDamConfigAnnotationPdfFontLight = cqDamConfigAnnotationPdfFontLight
        self.cqDamConfigAnnotationPdfMarginTextImage = cqDamConfigAnnotationPdfMarginTextImage
        self.cqDamConfigAnnotationPdfMinImageHeight = cqDamConfigAnnotationPdfMinImageHeight
        self.cqDamConfigAnnotationPdfReviewStatusWidth = cqDamConfigAnnotationPdfReviewStatusWidth
        self.cqDamConfigAnnotationPdfReviewStatusColorApproved = cqDamConfigAnnotationPdfReviewStatusColorApproved
        self.cqDamConfigAnnotationPdfReviewStatusColorRejected = cqDamConfigAnnotationPdfReviewStatusColorRejected
        self.cqDamConfigAnnotationPdfReviewStatusColorChangesRequested = cqDamConfigAnnotationPdfReviewStatusColorChangesRequested
        self.cqDamConfigAnnotationPdfAnnotationMarkerWidth = cqDamConfigAnnotationPdfAnnotationMarkerWidth
        self.cqDamConfigAnnotationPdfAssetMinheight = cqDamConfigAnnotationPdfAssetMinheight
    }

    public enum CodingKeys: String, CodingKey { 
        case cqDamConfigAnnotationPdfDocumentWidth = "cq.dam.config.annotation.pdf.document.width"
        case cqDamConfigAnnotationPdfDocumentHeight = "cq.dam.config.annotation.pdf.document.height"
        case cqDamConfigAnnotationPdfDocumentPaddingHorizontal = "cq.dam.config.annotation.pdf.document.padding.horizontal"
        case cqDamConfigAnnotationPdfDocumentPaddingVertical = "cq.dam.config.annotation.pdf.document.padding.vertical"
        case cqDamConfigAnnotationPdfFontSize = "cq.dam.config.annotation.pdf.font.size"
        case cqDamConfigAnnotationPdfFontColor = "cq.dam.config.annotation.pdf.font.color"
        case cqDamConfigAnnotationPdfFontFamily = "cq.dam.config.annotation.pdf.font.family"
        case cqDamConfigAnnotationPdfFontLight = "cq.dam.config.annotation.pdf.font.light"
        case cqDamConfigAnnotationPdfMarginTextImage = "cq.dam.config.annotation.pdf.marginTextImage"
        case cqDamConfigAnnotationPdfMinImageHeight = "cq.dam.config.annotation.pdf.minImageHeight"
        case cqDamConfigAnnotationPdfReviewStatusWidth = "cq.dam.config.annotation.pdf.reviewStatus.width"
        case cqDamConfigAnnotationPdfReviewStatusColorApproved = "cq.dam.config.annotation.pdf.reviewStatus.color.approved"
        case cqDamConfigAnnotationPdfReviewStatusColorRejected = "cq.dam.config.annotation.pdf.reviewStatus.color.rejected"
        case cqDamConfigAnnotationPdfReviewStatusColorChangesRequested = "cq.dam.config.annotation.pdf.reviewStatus.color.changesRequested"
        case cqDamConfigAnnotationPdfAnnotationMarkerWidth = "cq.dam.config.annotation.pdf.annotationMarker.width"
        case cqDamConfigAnnotationPdfAssetMinheight = "cq.dam.config.annotation.pdf.asset.minheight"
    }


}

