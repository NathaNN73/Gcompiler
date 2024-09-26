// Generated from c:/Users/Ryzen/TEORIA DE COMPILADORES/Grafo.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class GrafoLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		NUEVONODO=1, SETEARPOSICION=2, GRAFICARRUTA=3, BUSCARRUTA=4, A=5, NOMBRENODO=6, 
		RUTA=7, WS=8;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"NUEVONODO", "SETEARPOSICION", "GRAFICARRUTA", "BUSCARRUTA", "A", "NOMBRENODO", 
			"RUTA", "WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'nuevoNodo'", "'setearPosicion'", "'graficarRuta'", "'buscarRuta'", 
			"'a'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "NUEVONODO", "SETEARPOSICION", "GRAFICARRUTA", "BUSCARRUTA", "A", 
			"NOMBRENODO", "RUTA", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public GrafoLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Grafo.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000\bZ\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002\u0001"+
		"\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004"+
		"\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007"+
		"\u0007\u0007\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005"+
		"\u0005\u0005G\b\u0005\n\u0005\f\u0005J\t\u0005\u0001\u0006\u0004\u0006"+
		"M\b\u0006\u000b\u0006\f\u0006N\u0001\u0006\u0003\u0006R\b\u0006\u0001"+
		"\u0007\u0004\u0007U\b\u0007\u000b\u0007\f\u0007V\u0001\u0007\u0001\u0007"+
		"\u0000\u0000\b\u0001\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005"+
		"\u000b\u0006\r\u0007\u000f\b\u0001\u0000\u0004\u0002\u0000AZaz\u0003\u0000"+
		"09AZaz\u0001\u000001\u0003\u0000\t\n\f\r  ]\u0000\u0001\u0001\u0000\u0000"+
		"\u0000\u0000\u0003\u0001\u0000\u0000\u0000\u0000\u0005\u0001\u0000\u0000"+
		"\u0000\u0000\u0007\u0001\u0000\u0000\u0000\u0000\t\u0001\u0000\u0000\u0000"+
		"\u0000\u000b\u0001\u0000\u0000\u0000\u0000\r\u0001\u0000\u0000\u0000\u0000"+
		"\u000f\u0001\u0000\u0000\u0000\u0001\u0011\u0001\u0000\u0000\u0000\u0003"+
		"\u001b\u0001\u0000\u0000\u0000\u0005*\u0001\u0000\u0000\u0000\u00077\u0001"+
		"\u0000\u0000\u0000\tB\u0001\u0000\u0000\u0000\u000bD\u0001\u0000\u0000"+
		"\u0000\rQ\u0001\u0000\u0000\u0000\u000fT\u0001\u0000\u0000\u0000\u0011"+
		"\u0012\u0005n\u0000\u0000\u0012\u0013\u0005u\u0000\u0000\u0013\u0014\u0005"+
		"e\u0000\u0000\u0014\u0015\u0005v\u0000\u0000\u0015\u0016\u0005o\u0000"+
		"\u0000\u0016\u0017\u0005N\u0000\u0000\u0017\u0018\u0005o\u0000\u0000\u0018"+
		"\u0019\u0005d\u0000\u0000\u0019\u001a\u0005o\u0000\u0000\u001a\u0002\u0001"+
		"\u0000\u0000\u0000\u001b\u001c\u0005s\u0000\u0000\u001c\u001d\u0005e\u0000"+
		"\u0000\u001d\u001e\u0005t\u0000\u0000\u001e\u001f\u0005e\u0000\u0000\u001f"+
		" \u0005a\u0000\u0000 !\u0005r\u0000\u0000!\"\u0005P\u0000\u0000\"#\u0005"+
		"o\u0000\u0000#$\u0005s\u0000\u0000$%\u0005i\u0000\u0000%&\u0005c\u0000"+
		"\u0000&\'\u0005i\u0000\u0000\'(\u0005o\u0000\u0000()\u0005n\u0000\u0000"+
		")\u0004\u0001\u0000\u0000\u0000*+\u0005g\u0000\u0000+,\u0005r\u0000\u0000"+
		",-\u0005a\u0000\u0000-.\u0005f\u0000\u0000./\u0005i\u0000\u0000/0\u0005"+
		"c\u0000\u000001\u0005a\u0000\u000012\u0005r\u0000\u000023\u0005R\u0000"+
		"\u000034\u0005u\u0000\u000045\u0005t\u0000\u000056\u0005a\u0000\u0000"+
		"6\u0006\u0001\u0000\u0000\u000078\u0005b\u0000\u000089\u0005u\u0000\u0000"+
		"9:\u0005s\u0000\u0000:;\u0005c\u0000\u0000;<\u0005a\u0000\u0000<=\u0005"+
		"r\u0000\u0000=>\u0005R\u0000\u0000>?\u0005u\u0000\u0000?@\u0005t\u0000"+
		"\u0000@A\u0005a\u0000\u0000A\b\u0001\u0000\u0000\u0000BC\u0005a\u0000"+
		"\u0000C\n\u0001\u0000\u0000\u0000DH\u0007\u0000\u0000\u0000EG\u0007\u0001"+
		"\u0000\u0000FE\u0001\u0000\u0000\u0000GJ\u0001\u0000\u0000\u0000HF\u0001"+
		"\u0000\u0000\u0000HI\u0001\u0000\u0000\u0000I\f\u0001\u0000\u0000\u0000"+
		"JH\u0001\u0000\u0000\u0000KM\u0007\u0002\u0000\u0000LK\u0001\u0000\u0000"+
		"\u0000MN\u0001\u0000\u0000\u0000NL\u0001\u0000\u0000\u0000NO\u0001\u0000"+
		"\u0000\u0000OR\u0001\u0000\u0000\u0000PR\u0005*\u0000\u0000QL\u0001\u0000"+
		"\u0000\u0000QP\u0001\u0000\u0000\u0000R\u000e\u0001\u0000\u0000\u0000"+
		"SU\u0007\u0003\u0000\u0000TS\u0001\u0000\u0000\u0000UV\u0001\u0000\u0000"+
		"\u0000VT\u0001\u0000\u0000\u0000VW\u0001\u0000\u0000\u0000WX\u0001\u0000"+
		"\u0000\u0000XY\u0006\u0007\u0000\u0000Y\u0010\u0001\u0000\u0000\u0000"+
		"\u0005\u0000HNQV\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}