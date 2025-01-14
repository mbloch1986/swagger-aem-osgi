//
// ComDayCqRewriterProcessorImplHtmlParserFactoryProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqRewriterProcessorImplHtmlParserFactoryProperties: JSONEncodable {
    public var htmlparserProcessTags: ConfigNodePropertyArray?
    public var htmlparserPreserveCamelCase: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["htmlparser.processTags"] = self.htmlparserProcessTags?.encodeToJSON()
        nillableDictionary["htmlparser.preserveCamelCase"] = self.htmlparserPreserveCamelCase?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
