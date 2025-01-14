//
// ComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqDamHandlerGibsonFontmanagerImplFontManagerServiceImplProperties: Codable {

    public var eventFilter: ConfigNodePropertyString?
    public var fontmgrSystemFontDir: ConfigNodePropertyArray?
    public var fontmgrAdobeFontDir: ConfigNodePropertyString?
    public var fontmgrCustomerFontDir: ConfigNodePropertyString?

    public init(eventFilter: ConfigNodePropertyString?, fontmgrSystemFontDir: ConfigNodePropertyArray?, fontmgrAdobeFontDir: ConfigNodePropertyString?, fontmgrCustomerFontDir: ConfigNodePropertyString?) {
        self.eventFilter = eventFilter
        self.fontmgrSystemFontDir = fontmgrSystemFontDir
        self.fontmgrAdobeFontDir = fontmgrAdobeFontDir
        self.fontmgrCustomerFontDir = fontmgrCustomerFontDir
    }

    public enum CodingKeys: String, CodingKey { 
        case eventFilter = "event.filter"
        case fontmgrSystemFontDir = "fontmgr.system.font.dir"
        case fontmgrAdobeFontDir = "fontmgr.adobe.font.dir"
        case fontmgrCustomerFontDir = "fontmgr.customer.font.dir"
    }


}

