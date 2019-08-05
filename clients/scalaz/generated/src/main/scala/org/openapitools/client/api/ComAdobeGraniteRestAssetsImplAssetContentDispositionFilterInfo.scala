package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfo._

case class ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties])

object ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfo {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoCodecJson: CodecJson[ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfo] = CodecJson.derive[ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfo]
  implicit val ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoDecoder: EntityDecoder[ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfo] = jsonOf[ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfo]
  implicit val ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfoEncoder: EntityEncoder[ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfo] = jsonEncoderOf[ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterInfo]
}