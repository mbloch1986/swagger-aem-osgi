//
// OrgApacheSlingServletsGetDefaultGetServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct OrgApacheSlingServletsGetDefaultGetServletProperties: Codable {

    public var aliases: ConfigNodePropertyArray?
    public var index: ConfigNodePropertyBoolean?
    public var indexFiles: ConfigNodePropertyArray?
    public var enableHtml: ConfigNodePropertyBoolean?
    public var enableJson: ConfigNodePropertyBoolean?
    public var enableTxt: ConfigNodePropertyBoolean?
    public var enableXml: ConfigNodePropertyBoolean?
    public var jsonMaximumresults: ConfigNodePropertyInteger?
    public var ecmaSuport: ConfigNodePropertyBoolean?

    public init(aliases: ConfigNodePropertyArray?, index: ConfigNodePropertyBoolean?, indexFiles: ConfigNodePropertyArray?, enableHtml: ConfigNodePropertyBoolean?, enableJson: ConfigNodePropertyBoolean?, enableTxt: ConfigNodePropertyBoolean?, enableXml: ConfigNodePropertyBoolean?, jsonMaximumresults: ConfigNodePropertyInteger?, ecmaSuport: ConfigNodePropertyBoolean?) {
        self.aliases = aliases
        self.index = index
        self.indexFiles = indexFiles
        self.enableHtml = enableHtml
        self.enableJson = enableJson
        self.enableTxt = enableTxt
        self.enableXml = enableXml
        self.jsonMaximumresults = jsonMaximumresults
        self.ecmaSuport = ecmaSuport
    }

    public enum CodingKeys: String, CodingKey { 
        case aliases
        case index
        case indexFiles = "index.files"
        case enableHtml = "enable.html"
        case enableJson = "enable.json"
        case enableTxt = "enable.txt"
        case enableXml = "enable.xml"
        case jsonMaximumresults = "json.maximumresults"
        case ecmaSuport
    }


}

