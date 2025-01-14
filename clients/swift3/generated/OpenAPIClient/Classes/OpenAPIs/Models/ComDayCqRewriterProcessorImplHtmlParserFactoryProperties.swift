//
// ComDayCqRewriterProcessorImplHtmlParserFactoryProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqRewriterProcessorImplHtmlParserFactoryProperties: JSONEncodable {

    public var htmlparserProcessTags: ConfigNodePropertyArray?
    public var htmlparserPreserveCamelCase: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["htmlparser.processTags"] = self.htmlparserProcessTags?.encodeToJSON()
        nillableDictionary["htmlparser.preserveCamelCase"] = self.htmlparserPreserveCamelCase?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

