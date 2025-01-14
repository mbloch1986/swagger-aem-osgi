package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties._

case class ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties (
  linkcheckertransformerDisableRewriting: Option[ConfigNodePropertyBoolean],
linkcheckertransformerDisableChecking: Option[ConfigNodePropertyBoolean],
linkcheckertransformerMapCacheSize: Option[ConfigNodePropertyInteger],
linkcheckertransformerStrictExtensionCheck: Option[ConfigNodePropertyBoolean],
linkcheckertransformerStripHtmltExtension: Option[ConfigNodePropertyBoolean],
linkcheckertransformerRewriteElements: Option[ConfigNodePropertyArray],
linkcheckertransformerStripExtensionPathBlacklist: Option[ConfigNodePropertyArray])

object ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties {
  import DateTimeCodecs._

  implicit val ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryPropertiesCodecJson: CodecJson[ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties] = CodecJson.derive[ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties]
  implicit val ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryPropertiesDecoder: EntityDecoder[ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties] = jsonOf[ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties]
  implicit val ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryPropertiesEncoder: EntityEncoder[ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties] = jsonEncoderOf[ComDayCqRewriterLinkcheckerImplLinkCheckerTransformerFactoryProperties]
}
