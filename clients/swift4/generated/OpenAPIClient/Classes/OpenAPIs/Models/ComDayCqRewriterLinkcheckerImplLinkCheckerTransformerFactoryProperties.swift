//
// ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties: Codable {

    public var linkcheckertransformerDisableRewriting: ConfigNodePropertyBoolean?
    public var linkcheckertransformerDisableChecking: ConfigNodePropertyBoolean?
    public var linkcheckertransformerMapCacheSize: ConfigNodePropertyInteger?
    public var linkcheckertransformerStrictExtensionCheck: ConfigNodePropertyBoolean?
    public var linkcheckertransformerStripHtmltExtension: ConfigNodePropertyBoolean?
    public var linkcheckertransformerRewriteElements: ConfigNodePropertyArray?
    public var linkcheckertransformerStripExtensionPathBlacklist: ConfigNodePropertyArray?

    public init(linkcheckertransformerDisableRewriting: ConfigNodePropertyBoolean?, linkcheckertransformerDisableChecking: ConfigNodePropertyBoolean?, linkcheckertransformerMapCacheSize: ConfigNodePropertyInteger?, linkcheckertransformerStrictExtensionCheck: ConfigNodePropertyBoolean?, linkcheckertransformerStripHtmltExtension: ConfigNodePropertyBoolean?, linkcheckertransformerRewriteElements: ConfigNodePropertyArray?, linkcheckertransformerStripExtensionPathBlacklist: ConfigNodePropertyArray?) {
        self.linkcheckertransformerDisableRewriting = linkcheckertransformerDisableRewriting
        self.linkcheckertransformerDisableChecking = linkcheckertransformerDisableChecking
        self.linkcheckertransformerMapCacheSize = linkcheckertransformerMapCacheSize
        self.linkcheckertransformerStrictExtensionCheck = linkcheckertransformerStrictExtensionCheck
        self.linkcheckertransformerStripHtmltExtension = linkcheckertransformerStripHtmltExtension
        self.linkcheckertransformerRewriteElements = linkcheckertransformerRewriteElements
        self.linkcheckertransformerStripExtensionPathBlacklist = linkcheckertransformerStripExtensionPathBlacklist
    }

    public enum CodingKeys: String, CodingKey { 
        case linkcheckertransformerDisableRewriting = "linkcheckertransformer.disableRewriting"
        case linkcheckertransformerDisableChecking = "linkcheckertransformer.disableChecking"
        case linkcheckertransformerMapCacheSize = "linkcheckertransformer.mapCacheSize"
        case linkcheckertransformerStrictExtensionCheck = "linkcheckertransformer.strictExtensionCheck"
        case linkcheckertransformerStripHtmltExtension = "linkcheckertransformer.stripHtmltExtension"
        case linkcheckertransformerRewriteElements = "linkcheckertransformer.rewriteElements"
        case linkcheckertransformerStripExtensionPathBlacklist = "linkcheckertransformer.stripExtensionPathBlacklist"
    }


}

