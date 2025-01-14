//
// ComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqScreensImplHandlerChannelsUpdateHandlerProperties: Codable {

    public var cqPagesupdatehandlerImageresourcetypes: ConfigNodePropertyArray?
    public var cqPagesupdatehandlerProductresourcetypes: ConfigNodePropertyArray?
    public var cqPagesupdatehandlerVideoresourcetypes: ConfigNodePropertyArray?
    public var cqPagesupdatehandlerDynamicsequenceresourcetypes: ConfigNodePropertyArray?
    public var cqPagesupdatehandlerPreviewmodepaths: ConfigNodePropertyArray?

    public init(cqPagesupdatehandlerImageresourcetypes: ConfigNodePropertyArray?, cqPagesupdatehandlerProductresourcetypes: ConfigNodePropertyArray?, cqPagesupdatehandlerVideoresourcetypes: ConfigNodePropertyArray?, cqPagesupdatehandlerDynamicsequenceresourcetypes: ConfigNodePropertyArray?, cqPagesupdatehandlerPreviewmodepaths: ConfigNodePropertyArray?) {
        self.cqPagesupdatehandlerImageresourcetypes = cqPagesupdatehandlerImageresourcetypes
        self.cqPagesupdatehandlerProductresourcetypes = cqPagesupdatehandlerProductresourcetypes
        self.cqPagesupdatehandlerVideoresourcetypes = cqPagesupdatehandlerVideoresourcetypes
        self.cqPagesupdatehandlerDynamicsequenceresourcetypes = cqPagesupdatehandlerDynamicsequenceresourcetypes
        self.cqPagesupdatehandlerPreviewmodepaths = cqPagesupdatehandlerPreviewmodepaths
    }

    public enum CodingKeys: String, CodingKey { 
        case cqPagesupdatehandlerImageresourcetypes = "cq.pagesupdatehandler.imageresourcetypes"
        case cqPagesupdatehandlerProductresourcetypes = "cq.pagesupdatehandler.productresourcetypes"
        case cqPagesupdatehandlerVideoresourcetypes = "cq.pagesupdatehandler.videoresourcetypes"
        case cqPagesupdatehandlerDynamicsequenceresourcetypes = "cq.pagesupdatehandler.dynamicsequenceresourcetypes"
        case cqPagesupdatehandlerPreviewmodepaths = "cq.pagesupdatehandler.previewmodepaths"
    }


}

