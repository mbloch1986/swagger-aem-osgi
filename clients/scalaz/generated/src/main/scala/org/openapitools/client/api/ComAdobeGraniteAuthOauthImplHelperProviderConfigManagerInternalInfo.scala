package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalInfo._

case class ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalProperties])

object ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalInfo {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalInfoCodecJson: CodecJson[ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalInfo] = CodecJson.derive[ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalInfo]
  implicit val ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalInfoDecoder: EntityDecoder[ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalInfo] = jsonOf[ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalInfo]
  implicit val ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalInfoEncoder: EntityEncoder[ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalInfo] = jsonEncoderOf[ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalInfo]
}